function(platform_utility_test NAME)
  set(TARGET test-${NAME})
  add_executable(${TARGET} ${NAME}.cpp)
  target_link_libraries(${TARGET} PRIVATE platform_utility)
  target_compile_features(${TARGET} PRIVATE cxx_std_17)
  add_test(${NAME} ${TARGET} COMMAND ${TARGET})
endfunction()


platform_utility_test(compiler)
platform_utility_test(environment)
platform_utility_test(intrin)
platform_utility_test(os)