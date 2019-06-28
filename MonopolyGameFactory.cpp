#include "MonopolyGameFactory.h"
#include "Cubes.hpp"
#include "BoardFactory.h"
#include "CosmoCubes.hpp"

std::unique_ptr<Game> MonopolyGameFactory::createCosmoGame()
{
    return std::make_unique<Game>(std::make_shared<CosmoCubes>(), factory.createCosmoBoard());
}

std::unique_ptr<Game> MonopolyGameFactory::createRegularGame()
{
    return std::make_unique<Game>(std::make_shared<Cubes>(), factory.createCosmoBoard());
}
