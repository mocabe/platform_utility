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
  constexpr bool has_mmx = true;
#else
  constexpr bool has_mmx    = false;
#endif

#if defined(__AES__)
#  define PLATFORM_INTRIN_AES 1
  constexpr bool has_aes = true;
#else
  constexpr bool has_aes    = false;
#endif

#if defined(__FMA__)
#  define PLATFORM_INTRIN_FMA 1
  constexpr bool has_fma = true;
#else
  constexpr bool has_fma    = false;
#endif

#if defined(__SSE__)
#  define PLATFORM_INTRIN_SSE 1
  constexpr bool has_sse = true;
#else
  constexpr bool has_sse    = false;
#endif

#if defined(__SSE2__)
#  define PLATFORM_INTRIN_SSE2 1
  constexpr bool has_sse2 = true;
#else
  constexpr bool has_sse2   = false;
#endif

#if defined(__SSE3__)
#  define PLATFORM_INTRIN_SSE3 1
  constexpr bool has_sse3 = true;
#else
  constexpr bool has_sse3   = false;
#endif

#if defined(__SSSE3__)
#  define PLATFORM_INTRIN_SSE3 1
  constexpr bool has_ssse3 = true;
#else
  constexpr bool has_ssse3  = false;
#endif

#if defined(__SSE4_1__)
#  define PLATFORM_INTRIN_SSE4_1 1
  constexpr bool has_sse4_1 = true;
#else
  constexpr bool has_sse4_1 = false;
#endif

#if defined(__SSE4_2__)
#  define PLATFORM_INTRIN_SSE4_2 1
  constexpr bool has_sse4_2 = true;
#else
  constexpr bool has_sse4_2 = false;
#endif

#if defined(__AVX__)
#  define PLATFORM_INTRIN_AVX 1
  constexpr bool has_avx = true;
#else
  constexpr bool has_avx    = false;
#endif

#if defined(__AVX2__)
#  define PLATFORM_INTRIN_AVX2 1
  constexpr bool has_avx2 = true;
#else
  constexpr bool has_avx2     = false;
#endif

#if defined(__AVX512F__) // Foundation
#  define PLATFORM_INTRIN_AVX512F 1
  constexpr bool has_avx512f = true;
#else
  constexpr bool has_avx512f  = false;
#endif

#if defined(__AVX512DQ__) // Doubleword and Quadword
#  define PLATFORM_INTRIN_AVX512DQ 1
  constexpr bool has_avx512dq = true;
#else
  constexpr bool has_avx512dq = false;
#endif

#if defined(__AVX512BW__) // Byte and Word
#  define PLATFORM_INTRIN_AVX512BW 1
  constexpr bool has_avx512bw = true;
#else
  constexpr bool has_avx512bw = false;
#endif

#if defined(__AVX512CD__) // Conflict Detection
#  define PLATFORM_INTRIN_AVX512CD 1
  constexpr bool has_avx512cd = true;
#else
  constexpr bool has_avx512cd = false;
#endif

#if defined(__AVX512ER__) // Exponential and Reciprocal
#  define PLATFORM_INTRIN_AVX512ER 1
  constexpr bool has_avx512er = true;
#else
  constexpr bool has_avx512er = false;
#endif


#if defined(__AVX512PF__) // Prefetch Instructions
#  define PLATFORM_INTRIN_AVX512PF 1
  constexpr bool has_avx512pf = true;
#else
  constexpr bool has_avx512pf = false;
#endif

#if defined(__AVX512VL__) // Vector Length
#  define PLATFORM_INTRIN_AVX512VL 1
  constexpr bool has_avx512vl = true;
#else
  constexpr bool has_avx512vl = false;
#endif

}
