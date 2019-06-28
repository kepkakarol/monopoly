#include <iostream>
#include "Board.h"
#include "RandomTransactionDecider.h"
#include "GreedyTransactionDecider.h"
#include "HumanTransactionDecider.h"
#include "BoardFactory.h"
#include "MonopolyGameFactory.h"


int main()
{
    MonopolyGameFactory factory{};

    auto game = factory.createCosmoGame();
    game->addPlayer("Ala", std::make_shared<RandomTransactionDecider>());
    game->addPlayer("Krzys",std::make_shared<GreedyTransactionDecider>());
    game->addPlayer("Player",std::make_shared<HumanTransactionDecider>());

    game->startGame();

    return 0;
}
