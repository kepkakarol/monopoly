cmake_minimum_required(VERSION 3.14)
project(monopoly)

set(CMAKE_CXX_STANDARD 14)

set(SRCS Square.h Board.h)

add_executable(main main.cpp ${SRCS})
set_property(TARGET main PROPERTY CXX_STANDARD 14)