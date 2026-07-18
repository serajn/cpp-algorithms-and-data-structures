cmake_minimum_required(VERSION 3.20)

project(CPPDataStructures)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(DataStructures
    src/singly_linked_list.cpp
)

target_include_directories(DataStructures PUBLIC include)

add_subdirectory(tests)