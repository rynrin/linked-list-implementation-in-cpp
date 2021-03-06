cmake_minimum_required(VERSION 3.14)
project(linked_list_implementation)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  main_test
  test/main_test.cpp
)

target_link_libraries(
  main_test
  gtest_main
)

include_directories(src)
include(GoogleTest)
gtest_discover_tests(main_test)