cmake_minimum_required(VERSION 3.20)

project(CPPDataStructures)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(DataStructures
    src/singly_linked_list.cpp
)

target_include_directories(DataStructures PUBLIC include)