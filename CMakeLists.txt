cmake_minimum_required(VERSION 3.20)
project(cpp_practice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)           # use C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # fail instead of silently using an older standard
set(CMAKE_CXX_EXTENSIONS OFF)        # plain C++20, no compiler-specific extras

add_compile_options(-Wall -Wextra -Wconversion -Wsign-conversion)

add_subdirectory(01-setup)
