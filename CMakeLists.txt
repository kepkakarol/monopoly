cmake_minimum_required(VERSION 3.13)
project(monopoly)

set(CMAKE_CXX_STANDARD 14)

set(SRCS Square.h Board.h Player.cpp Player.h StartSquare.cpp StartSquare.h RewardSquare.cpp RewardSquare.h)

add_executable(main main.cpp Board.cpp ${SRCS})


set(dir ${CMAKE_CURRENT_SOURCE_DIR}/build)

set_property(TARGET main PROPERTY CXX_STANDARD 14)