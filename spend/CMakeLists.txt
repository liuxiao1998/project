cmake_minimum_required(VERSION 2.6)
project(spend)

add_executable(spend main.cpp)

install(TARGETS spend RUNTIME DESTINATION bin)
