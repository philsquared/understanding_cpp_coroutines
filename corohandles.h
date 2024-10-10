#include <coroutine>
#include <utility>

template<typename PromiseType>
struct ScopedCoroHandle : std::coroutine_handle<PromiseType> {
    std::coroutine_handle<PromiseType>& asHandle() { return static_cast<std::coroutine_handle<PromiseType>&>(*this); }

    ScopedCoroHandle() = default;
    ScopedCoroHandle(std::coroutine_handle<PromiseType> handle) : std::coroutine_handle<PromiseType>(handle){}
    ScopedCoroHandle& operator =(ScopedCoroHandle&&) = delete; // Disable copy & move
    ~ScopedCoroHandle() {
        if(*this)
            this->destroy();
    }
};

template<typename PromiseType>
struct UniqueCoroHandle : ScopedCoroHandle<PromiseType> {
    using ScopedCoroHandle<PromiseType>::ScopedCoroHandle;
    UniqueCoroHandle(UniqueCoroHandle&& other) noexcept
    : ScopedCoroHandle<PromiseType>(std::exchange(other.asHandle(), std::coroutine_handle<PromiseType>()))
    {}
    UniqueCoroHandle& operator=(UniqueCoroHandle&& other) noexcept {
        if(*this != other) {
            if( *this )
                this->destroy();
            this->asHandle() = std::exchange(other.asHandle(), std::coroutine_handle<PromiseType>());
        }
        return *this;
    }
};
