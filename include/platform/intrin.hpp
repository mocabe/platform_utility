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
#  define PLATFORM_INTRIN_MMX 1
  constexpr bool has_MMX = true;
#else
  constexpr bool has_MMX    = false;
#endif

#if defined(__AES__)
#  define PLATFORM_INTRIN_AES 1
  constexpr bool has_AES = true;
#else
  constexpr bool has_AES    = false;
#endif

#if defined(__FMA__)
#  define PLATFORM_INTRIN_FMA 1
  constexpr bool has_FMA = true;
#else
  constexpr bool has_FMA    = false;
#endif

#if defined(__SSE__)
#  define PLATFORM_INTRIN_SSE 1
  constexpr bool has_SSE = true;
#else
  constexpr bool has_SSE    = false;
#endif

#if defined(__SSE2__)
#  define PLATFORM_INTRIN_SSE2 1
  constexpr bool has_SSE2 = true;
#else
  constexpr bool has_SSE2   = false;
#endif

#if defined(__SSE3__)
#  define PLATFORM_INTRIN_SSE3 1
  constexpr bool has_SSE3 = true;
#else
  constexpr bool has_SSE3   = false;
#endif

#if defined(__SSSE3__)
#  define PLATFORM_INTRIN_SSE3 1
  constexpr bool has_SSSE3 = true;
#else
  constexpr bool has_SSSE3  = false;
#endif

#if defined(__SSE4_1__)
#  define PLATFORM_INTRIN_SSE4_1 1
  constexpr bool has_SSE4_1 = true;
#else
  constexpr bool has_SSE4_1 = false;
#endif

#if defined(__SSE4_2__)
#  define PLATFORM_INTRIN_SSE4_2 1
  constexpr bool has_SSE4_2 = true;
#else
  constexpr bool has_SSE4_2 = false;
#endif

#if defined(__AVX__)
#  define PLATFORM_INTRIN_AVX 1
  constexpr bool has_AVX = true;
#else
  constexpr bool has_AVX    = false;
#endif

#if defined(__AVX2__)
#  define PLATFORM_INTRIN_AVX2 1
  constexpr bool has_AVX2 = true;
#else
  constexpr bool has_AVX2     = false;
#endif

#if defined(__AVX512F__) // Foundation
#  define PLATFORM_INTRIN_AVX512F 1
  constexpr bool has_AVX512F = true;
#else
  constexpr bool has_AVX512F  = false;
#endif

#if defined(__AVX512DQ__) // Doubleword and Quadword
#  define PLATFORM_INTRIN_AVX512DQ 1
  constexpr bool has_AVX512DQ = true;
#else
  constexpr bool has_AVX512DQ = false;
#endif

#if defined(__AVX512BW__) // Byte and Word
#  define PLATFORM_INTRIN_AVX512BW 1
  constexpr bool has_AVX512BW = true;
#else
  constexpr bool has_AVX512BW = false;
#endif

#if defined(__AVX512CD__) // Conflict Detection
#  define PLATFORM_INTRIN_AVX512CD 1
  constexpr bool has_AVX512CD = true;
#else
  constexpr bool has_AVX512CD = false;
#endif

#if defined(__AVX512ER__) // Exponential and Reciprocal
#  define PLATFORM_INTRIN_AVX512ER 1
  constexpr bool has_AVX512ER = true;
#else
  constexpr bool has_AVX512ER = false;
#endif


#if defined(__AVX512PF__) // Prefetch Instructions
#  define PLATFORM_INTRIN_AVX512PF 1
  constexpr bool has_AVX512PF = true;
#else
  constexpr bool has_AVX512PF = false;
#endif

#if defined(__AVX512VL__) // Vector Length
#  define PLATFORM_INTRIN_AVX512VL 1
  constexpr bool has_AVX512VL = true;
#else
  constexpr bool has_AVX512VL = false;
#endif

}
