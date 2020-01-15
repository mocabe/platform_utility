cmake_minimum_required(VERSION 2.6)

project(platform_utility)

option(PLATFORM_UTILITY_BUILD_TESTS OFF)

add_library(platform_utility INTERFACE)
target_include_directories(platform_utility INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

if(PLATFORM_UTILITY_BUILD_TESTS)
  enable_testing()
  add_subdirectory(test)
endif()