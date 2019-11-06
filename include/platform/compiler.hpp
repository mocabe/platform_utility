//
// Copyright (c) 2019 mocabe (https://github.com/mocabe)
// SPDX-License-Identifier: MIT
//

#pragma once

#include <platform/detail/config.hpp>

namespace PLATFORM_UTILITY_NAMESPACE {

  /* compiler */

#if defined(__clang__)
#  define PLATFORM_COMPILER_CLANG 1
  inline constexpr bool is_clang = true;
#else
  inline constexpr bool is_clang = false;
#endif

#if defined(__INTEL_COMPILER)
#  define PLATFORM_COMPILER_ICC 1
  inline constexpr bool is_icc = true;
#else
  inline constexpr bool is_icc   = false;
#endif

#if defined(_MSC_VER)
#  define PLATFORM_COMPILER_MSVC 1
  inline constexpr bool is_msvc = true;
#else
  inline constexpr bool is_msvc  = false;
#endif

#if defined(__GNUC__)

#  if defined(PLATFORM_COMPILER_ICC) || defined(PLATFORM_COMPILER_CLANG)
  inline constexpr bool is_gcc = false;
#  else
#    define PLATFORM_COMPILER_GCC 1
  inline constexpr bool is_gcc = true;
#  endif

#else
  inline constexpr bool is_gcc   = false;
#endif

}