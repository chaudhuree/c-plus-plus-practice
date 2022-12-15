cmake_minimum_required(VERSION 3.23)
project(c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(basics)

add_executable(c__
        basics/01.variables.cpp
        basics/02.mathematical.cpp
        basics/helloChaudhuree.cpp testing.cpp)
