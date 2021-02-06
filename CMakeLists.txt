cmake_minimum_required(VERSION 3.17)
project(main_src)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall)
add_compile_definitions(GOSHA)
add_executable(main_src src/main.cpp)
add_executable(fast_stress stress-testing/fast.cpp)
add_executable(slow_stress stress-testing/slow.cpp)