# Exercises as Compiler Explorer links

On this page are all the example code and exercise starting points, using Compiler Explorer.
Compiler Explorer is astonishingly good for this sort of thing (along with its many other applications), 
    so do please consider supporting Matt and his team of volunteers as they maintain and evolve this precious resource for the community.
You can donate using [Patreon](https://www.patreon.com/bePatron?u=3691963), 
    [GitHub](https://github.com/sponsors/mattgodbolt) or
    [PayPal](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=KQWQZ7GPY2GZ6&item_name=Compiler+Explorer+development&currency_code=USD&source=url).


Slides available, [here](https://www.dropbox.com/scl/fi/golb8j166s56smt6r07zn/coroutines.pdf?rlkey=i4tysx3z9c0qu75vn4eabkwu2&dl=0)

## 1. Deus ex Machina

* We get started with a(n almost) blank slate. This CE link is set up with clang and gcc ready to go with C++20, and a trivial "Hello, World" starting point. There are two versions:
    * [(a) with compilers on the right](https://compiler-explorer.com/z/4nvf18oqh)
    * [(b) with compilers at the bottom](https://compiler-explorer.com/z/eb769TWWa)
* _Exercise_: "TDD" your way to a minimum viable coroutine.
   * [(c) Starting point](https://compiler-explorer.com/z/o9bhjxehh). Just clang. Instructions in the comments.
   * [(d) Solution](https://compiler-explorer.com/z/r4Pz1qdGG) (don't open this until you have tried to work through it youself)

## 2. Resuming and destroying coroutines

* Walk-through: 
   * (a) Starting point - previous Solution.

* _Exercise_: resume and destroy (same as above)
   * [(b) Starting point](https://compiler-explorer.com/z/4a3ooM9fj). Instructions in the comments.
   * [(c) Solution](https://compiler-explorer.com/z/4eEnff1oa)
 
## 3. Getting (return) values out

* Walk-through: 
   * (a) Starting point - previous Solution.

* _Exercise_: get return value (same as above)
   * [(b) Starting point](https://compiler-explorer.com/z/hxecP7bT5). Instructions in the comments.
   * [(c) Solution](https://compiler-explorer.com/z/33KbjGqMh)

## 4. Yielding values

* Walk-through:
   * (a) Starting point - previous Solution.

* _Exercise_: 
   * [(b) Starting point](https://compiler-explorer.com/z/rqKzPqGzM). Instructions in the comments
   * [(c) Solution](https://compiler-explorer.com/z/xzcnMo9Pv)

## 5. Generators

* Walk-through
    * (a) Starting point - previous Solution

* _Exercise_:
    * [(b) Starting point](https://compiler-explorer.com/z/zc4s6aT6K)
    * [(c) Solution](https://compiler-explorer.com/z/8TKbaMars)

## 6. co_await : trivially awaitable types

* Walk-through
    * [(a) Starting point](https://compiler-explorer.com/z/5vPq4K5Gq)

## 7. Simple awaiters: passing a value back to the coroutine

* Walk-through
    * (a) Continue from above

* _Exercise_:
    * [(b) Starting point](https://compiler-explorer.com/z/44hxch9q1)
    * [(c) Solution](https://compiler-explorer.com/z/3c89zWGq7)

## 8. Awaiters of external things

* Walk-through
    * [(a) Starting point](https://compiler-explorer.com/z/o6dn8j3Mn)
    * (b) Exercise?
    * [(c) Solution](https://compiler-explorer.com/z/1fG8f1zva)

* Walk-through
    * (d) Continue from above

* _Exercise_:
    * [(e) Starting point](https://compiler-explorer.com/z/cb8hqa4Te)
    * [(f) Solution](https://compiler-explorer.com/z/e1f9sz98K)

## 9. Keeping your promises

* Walk-through
    * [(a) Starting point](https://compiler-explorer.com/z/1cx3bcs13) (just co_return)
    * [(b) Solution](https://compiler-explorer.com/z/31MzT16zn)

## 10. Memory and HALO

* Walk-through
    * [(a) Starting Point](https://compiler-explorer.com/z/rWd8xz91W) (co_yield)
* End-points
  * [(b) Detect heap allocation](https://compiler-explorer.com/z/x5jfYne97)
  * [(c) Solution with stack buffer](https://compiler-explorer.com/z/69d9xYK3G)

(A better solution is to use PMR allocators)

## 11. Following the Rule of 0

Mixing lifetime management of handle in with other responsibilities of Task
    breaks the Rule of 0. Let's fix that by introducing a couple of helper classes to manage handles.

* [(a) Demo](https://compiler-explorer.com/z/fToM71PPe)
* [On GitHub](https://github.com/philsquared/understanding_cpp_coroutines/blob/main/corohandles.h)
