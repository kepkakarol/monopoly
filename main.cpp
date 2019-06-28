#include <iostream>
#include "Game.h"
#include "Board.h"
#include "Cubes.hpp"
#include "RandomTransactionDecider.h"
#include "GreedyTransactionDecider.h"
#include "HumanTransactionDecider.h"


int main() {

    Game b(std::make_shared<Cubes>(), std::make_shared<Board>());
    b.addPlayer("Ala", std::make_shared<RandomTransactionDecider>());
    b.addPlayer("Krzys",std::make_shared<GreedyTransactionDecider>());
    b.addPlayer("Player",std::make_shared<HumanTransactionDecider>());
    b.startGame();

    return 0;

}
