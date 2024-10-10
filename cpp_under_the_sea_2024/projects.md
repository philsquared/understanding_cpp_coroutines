# Exercises as Compiler Explorer links

On this page are all the example code and exercise starting points, using Compiler Explorer.
Compiler Explorer is astonishingly good for this sort of thing (along with its many other applications), 
    so do please consider supporting Matt and his team of volunteers as they maintain and evolve this precious resource for the community.
You can donate using [Patreon](https://www.patreon.com/bePatron?u=3691963), 
    [GitHub](https://github.com/sponsors/mattgodbolt) or
    [PayPal](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=KQWQZ7GPY2GZ6&item_name=Compiler+Explorer+development&currency_code=USD&source=url).

## 1. Deus ex Machina

* We get started with a(n almost) blank slate. This CE link is set up with clang and gcc ready to go with C++20, and a trivial "Hello, World" starting point. There are two versions:
    * [(a) with compilers on the right](https://compiler-explorer.com/z/4nvf18oqh)
    * [(b) with compilers at the bottom](https://compiler-explorer.com/z/eb769TWWa)
* _Exercise_: "TDD" your way to a minimum viable coroutine.
   * [(c) Starting point](https://compiler-explorer.com/z/fMrKhex45). Just clang. Instructions in the comments.
   * [(d) Solution](https://compiler-explorer.com/z/3Wch3TPvv) (don't open this until you have tried to work through it youself)

## 2. Resuming and destroying coroutines

* Walk-through: 
   * (a) Starting point - previous Solution.

* _Exercise_: resume and destroy (same as above)
   * [(b) Starting point](https://compiler-explorer.com/z/hqE5dY7e7). Instructions in the comments.
   * [(c) Solution](https://compiler-explorer.com/z/EdbnvnMEK)
 
## 3. Getting (return) values out

* Walk-through: 
   * (a) Starting point - previous Solution.

* _Exercise_: get return value (same as above)
   * [(b) Starting point](https://compiler-explorer.com/z/rz9fhvc7o). Instructions in the comments.
   * [(c) Solution](https://compiler-explorer.com/z/s7K99MEh5)

## 4. Yielding values

* Walk-through:
   * (a) Starting point - previous Solution.

* _Exercise_: 
   * [(b) Starting point](https://compiler-explorer.com/z/6e7dz6876). Instructions in the comments
   * [(c) Solution](https://compiler-explorer.com/z/691E53TPM)

## 5. Generators

* Walk-through
    * (a) Starting point - previous Solution

* _Exercise_:
    * [(b) Starting point](https://compiler-explorer.com/z/xeTWx6bjq)
    * [(c) Solution](https://compiler-explorer.com/z/Y1sWz4vbE)

## 6. co_await : trivially awaitable types

* Walk-through
    * [(a) Starting point](https://compiler-explorer.com/z/a9Tscx8zq)

## 7. Simple awaiters: passing a value back to the coroutine

* Walk-through
    * (a) Continue from above

* _Exercise_:
    * [(b) Starting point](https://compiler-explorer.com/z/P98875chK)
    * [(c) Solution](https://compiler-explorer.com/z/WbroTsbx9)

## 8. Awaiters of external things

* Walk-through
    * [(a) Starting point](https://compiler-explorer.com/z/Yfdvh81M3)

* _Exercise_:
    * [(b) Starting point]()
    * [(c) Solution](https://compiler-explorer.com/z/6z7e4W6z6)

* Walk-through
    * (d) Continue from above

* _Exercise_:
    * [(e) Starting point](https://compiler-explorer.com/z/PfET7MWhe)
    * [(f) Solution](https://compiler-explorer.com/z/drTh4e9s1)

## 9. Keeping your promises

* Walk-through
    * [(a) Starting point](https://compiler-explorer.com/z/s7K99MEh5) (just co_return)
    * [(b) Solution](https://compiler-explorer.com/z/7W4onxozs)

## 10. Memory and HALO

* [(a) Starting Point](https://compiler-explorer.com/z/s85Yfee17) (co_yield)
* [(b) Detect heap allocation](https://compiler-explorer.com/z/KhdYvzcY3)
* [(c) Solution with stack buffer](https://compiler-explorer.com/z/n1qdEo4Yh)

## 11. Following the Rule of 0

Mixing lifetime management of handle in with other responsibilities of Task
    breaks the Rule of 0. Let's fix that by introducing a couple of helper classes to manage handles.

* [(a) Demo](https://compiler-explorer.com/z/qb4hq6W1c)

