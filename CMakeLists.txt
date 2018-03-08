cmake_minimum_required(VERSION 3.9)
project(hello_world)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello_world main.cpp test_class.cpp test_class.h)