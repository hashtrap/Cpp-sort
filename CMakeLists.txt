cmake_minimum_required(VERSION 3.27)
project(Cpp_sort)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cpp_sort
        Main.cpp
        Sort.cpp
        Sort.h)
