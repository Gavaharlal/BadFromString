cmake_minimum_required(VERSION 3.13)
project(BadFromString)

set(CMAKE_CXX_STANDARD 17)

add_executable(BadFromString main.cpp BadFromStringException.h BadFromStringException.cpp)