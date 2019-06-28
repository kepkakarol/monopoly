#ifndef MONOPOLY_MONOPOLYGAMEFACTORY_H
#define MONOPOLY_MONOPOLYGAMEFACTORY_H


#include "Game.h"
#include <memory>
#include "BoardFactory.h"

class MonopolyGameFactory
{
public:

    std::unique_ptr<Game> createCosmoGame();
    std::unique_ptr<Game> createRegularGame();

private:

    BoardFactory factory;

};


#endif //MONOPOLY_MONOPOLYGAMEFACTORY_H
