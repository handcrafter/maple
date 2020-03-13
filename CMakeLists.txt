cmake_minimum_required(VERSION 3.15)

project(maple)

# C++ 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  # using Clang
  message("Clang")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  # using GCC
  message("GCC")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Intel")
  # using Intel C++
  message("Intel C++")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  # using Visual Studio C++
  message("Visual Studio C++")
endif()

# include files
include_directories(
    include
)

# target
add_executable(
    maple
    src/node.cpp
    src/main.cpp
)
