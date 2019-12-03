cmake_minimum_required(VERSION 3.15)
project(advent_of_code_2019)

set(CMAKE_CXX_STANDARD 14)

include_directories(day1)

add_executable(advent_of_code_2019
        day1/Day1.cpp
        day1/Day1.h
        day1/main.cpp
        README)
