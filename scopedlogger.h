#include <iostream>
#include <source_location>

// Logs to cout, with current indent
#define LOG(...) std::cout << std::string(ScopedLogger::indent, ' ') << __VA_ARGS__ << std::endl

// Logs in and out of a scope
struct ScopedLogger {
    static int indent;
    std::string m_name;
    ScopedLogger(std::string name) : m_name( std::move(name) ){
        LOG("\\" << m_name);
        indent++;
    }
    ~ScopedLogger() {
        indent--;
        LOG("/" << m_name);
    }
};
int ScopedLogger::indent = 0; // Should go in cpp file, if we have one

// Creates a ScopedLogger for the current function
#define LOGF() ScopedLogger logger##__LINE__(std::source_location::current().function_name())
