#include <platform/os.hpp>
#include <iostream>

template <class...>
constexpr bool true_v = true;

template <class T = int>
void test()
{
  if constexpr (platform::is_windows) {
    static_assert(true_v<T> && !platform::is_linux);
    static_assert(true_v<T> && !platform::is_osx);
    std::cout << "os: windows\n";
  }
  if constexpr (platform::is_linux) {
    static_assert(true_v<T> && !platform::is_windows);
    static_assert(true_v<T> && !platform::is_osx);
    std::cout << "os: linux\n";
  }
  if constexpr (platform::is_osx) {
    static_assert(true_v<T> && !platform::is_windows);
    static_assert(true_v<T> && !platform::is_linux);
    std::cout << "os: osx\n";
  }
}

int main()
{
  test();
}