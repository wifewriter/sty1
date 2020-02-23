cmake_minimum_required(VERSION 3.15)
project(sty1 C)

set(CMAKE_C_STANDARD 99)

add_executable(sty1 src/acllib.c src/acllib.h src/window.c)