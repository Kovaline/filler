cmake_minimum_required(VERSION 3.13)
project(filler C)

link_directories(libft)
set(CMAKE_C_STANDARD 99)

add_executable(filler filler.c solve.c tools.c)
target_link_libraries(filler /Users/ikovalen/filler/libft/libftprintf.a)