cmake_minimum_required(VERSION 3.0.0)
project(ltest)

add_executable(ltest ltest.cpp Logical.cpp NOT.cpp OR.cpp AND.cpp)
add_compile_options(-Wall -g -pedantic -pedantic-errors -Wextra)

