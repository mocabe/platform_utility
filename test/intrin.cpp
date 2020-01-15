#include <platform/intrin.hpp>
#include <iostream>

#define PLATFORM_INTRIN_PRINT(NAME)  \
  if (platform::has_##NAME)          \
    std::cout << "on : " #NAME "\n"; \
  else                               \
    std::cout << "off: " #NAME "\n"

int main()
{
  PLATFORM_INTRIN_PRINT(mmx);
  PLATFORM_INTRIN_PRINT(aes);
  PLATFORM_INTRIN_PRINT(mmx);
  PLATFORM_INTRIN_PRINT(fma);
  PLATFORM_INTRIN_PRINT(sse);
  PLATFORM_INTRIN_PRINT(sse2);
  PLATFORM_INTRIN_PRINT(sse3);
  PLATFORM_INTRIN_PRINT(sse4_1);
  PLATFORM_INTRIN_PRINT(sse4_2);
  PLATFORM_INTRIN_PRINT(avx);
  PLATFORM_INTRIN_PRINT(avx2);
  PLATFORM_INTRIN_PRINT(avx512f);
  PLATFORM_INTRIN_PRINT(avx512dq);
  PLATFORM_INTRIN_PRINT(avx512bw);
  PLATFORM_INTRIN_PRINT(avx512cd);
  PLATFORM_INTRIN_PRINT(avx512er);
  PLATFORM_INTRIN_PRINT(avx512pf);
  PLATFORM_INTRIN_PRINT(avx512vl);
}