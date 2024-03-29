cmake_minimum_required(VERSION 3.13)
project(monopoly)

set(CMAKE_CXX_STANDARD 14)

set(SRCS ISquare.h Game.h Player.cpp Player.h StartSquare.cpp StartSquare.h RewardSquare.cpp RewardSquare.h PunishmentSquare.cpp PunishmentSquare.h Board.cpp Board.h DepositSquare.cpp DepositSquare.h Cubes.hpp Iterator.cpp Iterator.h MansionSquare.cpp MansionSquare.h TransactionDecider.cpp TransactionDecider.h GreedyTransactionDecider.cpp GreedyTransactionDecider.h RandomTransactionDecider.cpp RandomTransactionDecider.h Piece.h HumanTransactionDecider.cpp HumanTransactionDecider.h RandomSquare.cpp RandomSquare.h PrisonSquare.cpp PrisonSquare.h BlackHoleSquare.cpp BlackHoleSquare.h BoardFactory.cpp BoardFactory.h MonopolyGameFactory.cpp MonopolyGameFactory.h CosmoCubes.hpp)

add_executable(main main.cpp Game.cpp ${SRCS})


set(dir ${CMAKE_CURRENT_SOURCE_DIR}/build)

set_property(TARGET main PROPERTY CXX_STANDARD 14)



# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test_gt.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
