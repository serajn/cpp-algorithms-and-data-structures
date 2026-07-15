cmake_minimum_required(VERSION 3.20)

project(singly_linked_list)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(singly_linked_list
    src/main.cpp
    src/singly_linked_list.cpp
)

target_include_directories(singly_linked_list PRIVATE include)