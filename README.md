# platform_utility

Compile time platform detections and utilities.

* `compiler.hpp`  
  Compiler detection macros and variables:
  - macros: 
    * `PLATFORM_COMPILER_GCC`
    * `PLATFORM_COMPILER_CLANG`
    * `PLATFORM_COMPILER_ICC`
    * `PLATFORM_COMPILER_MSVC`
  - variables:
    * `platform::is_gcc`
    * `platform::is_clang`
    * `platform::is_icc`
    * `platform::is_msvc`

* `environment.hpp`  
  Environment detection macros and variables.
  - macros:
    * `PLATFORM_ENVIRONMENT_MINGW`
    * `PLATFORM_ENVIRONMENT_CYGWIN`
    * `PLATFORM_ENVIRONMENT_UNIX`
  - variables:
    * `platform::is_mingw`
    * `platform::is_cygwin`
    * `platform::is_unix`

* `os.hpp`
  OS detection macros and variables:
  - macros: 
    * `PLATFORM_OS_WINDOWS`
    * `PLATFORM_OS_LINUX`
    * `PLATFORM_OS_OSX`
  - variables: 
    * `platform::is_windows`
    * `platform::is_linux`
    * `platform::is_osx`


* `intrin.hpp`
  x86 intrin detection macros and variables:
  - macros: 
    * `PLATFORM_INTRIN_MMX`
    * `PLATFORM_INTRIN_AES`
    * `PLATFORM_INTRIN_FMA`
    * `PLATFORM_INTRIN_SSE`
    * `PLATFORM_INTRIN_SSE2`
    * `PLATFORM_INTRIN_SSE3`
    * `PLATFORM_INTRIN_SSE4_1`
    * `PLATFORM_INTRIN_SSE4_2`
    * `PLATFORM_INTRIN_AVX`
    * `PLATFORM_INTRIN_AVX2`
    * `PLATFORM_INTRIN_AVX512F`
    * `PLATFORM_INTRIN_AVX512DQ`
    * `PLATFORM_INTRIN_AVX512BW`
    * `PLATFORM_INTRIN_AVX512CD`
    * `PLATFORM_INTRIN_AVX512ER`
    * `PLATFORM_INTRIN_AVX512PF`
    * `PLATFORM_INTRIN_AVX512VL`
  - variables: 
    * `platform::has_mmx`
    * `platform::has_aes`
    * `platform::has_fma`
    * `platform::has_sse`
    * `platform::has_sse2`
    * `platform::has_sse3`
    * `platform::has_sse4_1`
    * `platform::has_sse4_2`
    * `platform::has_avx`
    * `platform::has_avx2`
    * `platform::has_avx512f`
    * `platform::has_avx512dq`
    * `platform::has_avx512bw`
    * `platform::has_avx512cd`
    * `platform::has_avx512er`
    * `platform::has_avx512pf`
    * `platform::has_avx512vl`