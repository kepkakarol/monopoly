//
// Created by wojtysia on 28.06.19.
//

#include <vector>
#include "BoardFactory.h"
#include "ISquare.h"
#include "StartSquare.h"
#include "RewardSquare.h"
#include "MansionSquare.h"
#include "DepositSquare.h"
#include "BlackHoleSquare.h"
#include "PunishmentSquare.h"
#include "RandomSquare.h"
#include "PrisonSquare.h"

std::shared_ptr<Board> BoardFactory::createRegularBoard()
{
    return std::make_shared<Board>(createRegularSquares());
}

std::shared_ptr<Board> BoardFactory::createCosmoBoard()
{
    return std::make_shared<Board>(createCosmoSquares());
}

std::vector<std::shared_ptr<ISquare>> BoardFactory::createRegularSquares() {
    return {
            std::shared_ptr<ISquare>(std::make_shared<StartSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<MansionSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
            std::shared_ptr<ISquare>(std::make_shared<RandomSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<MansionSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
            std::shared_ptr<ISquare>(std::make_shared<RandomSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<PrisonSquare>()),
    };
}

std::vector<std::shared_ptr<ISquare>> BoardFactory::createCosmoSquares() {
    return {
            std::shared_ptr<ISquare>(std::make_shared<StartSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
            std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
            std::shared_ptr<ISquare>(std::make_shared<RandomSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
            std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
            std::shared_ptr<ISquare>(std::make_shared<RandomSquare>()),
            std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())),
    };
}