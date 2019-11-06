//
// Copyright (c) 2019 mocabe (https://github.com/mocabe)
// SPDX-License-Identifier: MIT
//

#pragma once

#include <platform/detail/config.hpp>

namespace PLATFORM_UTILITY_NAMESPACE {

  /* environments */

#if defined(__MING32__) || defined(__MINGW64__)
#  define PLATFORM_ENVIRONMENT_MINGW 1
  inline constexpr bool is_mingw = true;
#else
  inline constexpr bool is_mingw  = false;
#endif

#if defined(__CYGWIN__)
#  define PLATFORM_ENVIRONMENT_CYGWIN 1
  inline constexpr bool is_cygwin = true;
#else
  inline constexpr bool is_cygwin = false;
#endif

#if defined(__unix__)
  inline constexpr bool is_unix = true;
#  define PLATFORM_ENVIRONMENT_UNIX 1
#else
  inline constexpr bool is_unix   = false;
#endif
}
