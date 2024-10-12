cmake_minimum_required(VERSION 3.10)

project(HelloCov)

set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

if(ENABLE_COVERAGE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()

if(ENABLE_ASAN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address,leak,undefined")
  message(STATUS "You turned on ASAN")
endif()

if(ENABLE_TSAN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")
  message(STATUS "You turned on TSAN")
endif()

if(ENABLE_MSAN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory,undefined -fsanitize-memory-track-origins")
  message(STATUS "You turned on MSAN")
endif()

add_subdirectory(src)

enable_testing()
add_subdirectory(test)

