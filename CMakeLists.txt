cmake_minimum_required(VERSION 3.20)
project(cus-alg)
set(CMAKE_CXX_STANDARD 17)

find_package(GTest CONFIG REQUIRED)

add_executable(heap_test heap_test.cpp)
target_include_directories(heap_test PRIVATE GTest::GTest)
target_link_libraries(heap_test PRIVATE GTest::gtest)

enable_testing()

add_test(NAME heap_test COMMAND heap_test)
