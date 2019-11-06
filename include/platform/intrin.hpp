//
// Copyright (c) 2019 mocabe (https://github.com/mocabe)
// SPDX-License-Identifier: MIT
//

#pragma once

#include <platform/detail/config.hpp>

#if defined(_MSC_VER)
#  include <intrin.h>
#else
#  include <x86intrin.h>
#endif

namespace PLATFORM_UTILITY_NAMESPACE {

  /* intrin */

#if defined(__MMX__)
  constexpr bool has_MMX = true;
#  define YAVE_MMX
#else
  constexpr bool has_MMX    = false;
#endif

#if defined(__AES__)
  constexpr bool has_AES = true;
#  define YAVE_AES
#else
  constexpr bool has_AES    = false;
#endif

#if defined(__FMA__)
  constexpr bool has_FMA = true;
#  define YAVE_FMA
#else
  constexpr bool has_FMA    = false;
#endif

#if defined(__SSE__)
  constexpr bool has_SSE = true;
#  define YAVE_SSE
#else
  constexpr bool has_SSE    = false;
#endif

#if defined(__SSE2__)
  constexpr bool has_SSE2 = true;
#  define YAVE_SSE2
#else
  constexpr bool has_SSE2   = false;
#endif

#if defined(__SSE3__)
  constexpr bool has_SSE3 = true;
#  define YAVE_SSE3
#else
  constexpr bool has_SSE3   = false;
#endif

#if defined(__SSSE3__)
  constexpr bool has_SSSE3 = true;
#  define YAVE_SSE3
#else
  constexpr bool has_SSSE3  = false;
#endif

#if defined(__SSE4_1__)
  constexpr bool has_SSE4_1 = true;
#  define YAVE_SSE4_1
#else
  constexpr bool has_SSE4_1 = false;
#endif

#if defined(__SSE4_2__)
  constexpr bool has_SSE4_2 = true;
#  define YAVE_SSE4_2
#else
  constexpr bool has_SSE4_2 = false;
#endif

#if defined(__AVX__)
  constexpr bool has_AVX = true;
#  define YAVE_AVX
#else
  constexpr bool has_AVX    = false;
#endif

#if defined(__AVX2__)
  constexpr bool has_AVX2 = true;
#  define YAVE_AVX2
#else
  constexpr bool has_AVX2     = false;
#endif

#if defined(__AVX512F__) // Foundation
  constexpr bool has_AVX512F = true;
#else
  constexpr bool has_AVX512F  = false;
#endif

#if defined(__AVX512DQ__) // Doubleword and Quadword
  constexpr bool has_AVX512DQ = true;
#else
  constexpr bool has_AVX512DQ = false;
#endif

#if defined(__AVX512BW__) // Byte and Word
  constexpr bool has_AVX512BW = true;
#else
  constexpr bool has_AVX512BW = false;
#endif

#if defined(__AVX512CD__) // Conflict Detection
  constexpr bool has_AVX512CD = true;
#else
  constexpr bool has_AVX512CD = false;
#endif

#if defined(__AVX512ER__) // Exponential and Reciprocal
  constexpr bool has_AVX512ER = true;
#else
  constexpr bool has_AVX512ER = false;
#endif


#if defined(__AVX512PF__) // Prefetch Instructions
  constexpr bool has_AVX512PF = true;
#else
  constexpr bool has_AVX512PF = false;
#endif

#if defined(__AVX512VL__) // Vector Length
  constexpr bool has_AVX512VL = true;
#else
  constexpr bool has_AVX512VL = false;
#endif

}
