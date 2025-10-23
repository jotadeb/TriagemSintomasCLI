cmake_minimum_required(VERSION 4.0)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-fexec-charset=UTF-8 -finput-charset=UTF-8)

add_executable(untitled Aep.c
)