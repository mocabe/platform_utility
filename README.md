# platform_utility

Compile time platform detections and utilities.

* `compiler.hpp`  
  Compiler detection macros and variables:
  - macro: `PLATFORM_COMPILER_GCC`, etc.
  - variable: `platform::is_gcc`, etc.

* `environment.hpp`  
  Environment detection macros and variables.
  - macro: `PLATFORM_ENVIRONMENT_MINGW`, etc.
  - variable: `platform::is_mingw`, etc.

* `os.hpp`
  OS detection macros and variables:
  - macro: `PLATFORM_OS_WINDOWS`, etc.
  - variable: `platform::is_windows`, etc.

* `intrin.hpp`
  x84 intrin detection macros and variables:
  - macros: `PLATFORM_INTRIN_AVX2`, etc.
  - variables: `platform::has_avx2`, etc.