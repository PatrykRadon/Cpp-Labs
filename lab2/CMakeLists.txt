cmake_minimum_required(VERSION 3.0.0)
project(etest)
add_executable(etest etest.cpp Executor.cpp )
add_compile_options(-Wall -g -pedantic -pedantic-errors -Wextra)