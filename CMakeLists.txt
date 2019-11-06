cmake_minimum_required(VERSION 2.6)

project(platform_utility)

add_library(platform_utility INTERFACE)
target_include_directories(platform_utility INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)