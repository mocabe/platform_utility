#include <platform/compiler.hpp>

#include <iostream>

template <class...>
constexpr bool true_v = true;

template <class T = int>
void test()
{
  if constexpr (platform::is_clang) {
    static_assert(true_v<T> && !platform::is_gcc);
    static_assert(true_v<T> && !platform::is_icc);
    static_assert(true_v<T> && !platform::is_msvc);
    std::cout << "compiler: clang\n" << std::endl;
  }

  if constexpr (platform::is_gcc) {
    static_assert(true_v<T> && !platform::is_clang);
    static_assert(true_v<T> && !platform::is_icc);
    static_assert(true_v<T> && !platform::is_msvc);
    std::cout << "compiler: gcc\n" << std::endl;
  }

  if constexpr (platform::is_icc) {
    static_assert(true_v<T> && !platform::is_clang);
    static_assert(true_v<T> && !platform::is_gcc);
    static_assert(true_v<T> && !platform::is_msvc);
    std::cout << "compiler: icc\n" << std::endl;
  }

  if constexpr (platform::is_msvc) {
    static_assert(true_v<T> && !platform::is_clang);
    static_assert(true_v<T> && !platform::is_gcc);
    static_assert(true_v<T> && !platform::is_icc);
    std::cout << "compiler: msvc\n" << std::endl;
  }
}

int main()
{
  test();
}