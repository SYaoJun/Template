add_library(test_lib STATIC test_lib.cpp)
target_include_directories(test_lib PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_executable(asan_test asan_test.cpp)

add_executable(tsan_test tsan_test.cpp)
add_executable(msan_test msan_test.cpp)