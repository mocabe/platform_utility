#include <platform/environment.hpp>
#include <iostream>

template <class...>
constexpr bool true_v = true;

template <class T = int>
void test()
{
  if constexpr (platform::is_unix) {
    static_assert(true_v<T> && !platform::is_cygwin);
    static_assert(true_v<T> && !platform::is_mingw);
    std::cout << "environment: unix\n";
  }

  if constexpr (platform::is_mingw) {
    static_assert(true_v<T> && !platform::is_unix);
    static_assert(true_v<T> && !platform::is_cygwin);
    std::cout << "environment: mingw\n";
  }

  if constexpr (platform::is_cygwin) {
    static_assert(true_v<T> && !platform::is_unix);
    static_assert(true_v<T> && !platform::is_mingw);
    std::cout << "environment: cygwin\n";
  }
}

int main()
{
  test();
}