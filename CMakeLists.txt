cmake_minimum_required(VERSION 3.13)
project(monopoly)

set(CMAKE_CXX_STANDARD 14)

set(SRCS Square.h Board.h Player.cpp Player.h)

add_executable(main main.cpp Board.cpp ${SRCS})


set(dir ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
set(LIBRARY_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir})
set(CMAKE_BUILD_FILES_DIRECTORY ${dir})
set(CMAKE_BUILD_DIRECTORY ${dir})
set(CMAKE_BINARY_DIR  ${dir})

set_property(TARGET main PROPERTY CXX_STANDARD 14)