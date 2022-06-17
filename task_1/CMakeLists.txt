cmake_minimum_required(VERSION 3.16.3)
project(guessing_number)

set(CMAKE_CXX_STANDARD 17)# -std=c++17
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*")
set(CMAKE_CXX_CLANG_FORMAT)
set(CMAKE_CXX_CPPCHECK "cppcheck")
add_executable(task_1 guessing_game.cpp)