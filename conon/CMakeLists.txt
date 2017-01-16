cmake_minimum_required(VERSION 2.6)
project(conon)

add_executable(conon main.cpp)

install(TARGETS conon RUNTIME DESTINATION bin)
