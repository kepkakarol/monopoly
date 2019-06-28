#include "RandomSquare.h"
#include "RewardSquare.h"
#include "PunishmentSquare.h"
#include "DepositSquare.h"

RandomSquare::RandomSquare()
{
    srand(time(NULL));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<PunishmentSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()));
}

RandomSquare::RandomSquare(std::shared_ptr<ISquare> sq1,
                           std::shared_ptr<ISquare> sq2,
                           std::shared_ptr<ISquare> sq3)
{
    srand(time(NULL));
    squares.push_back(std::move(sq1));
    squares.push_back(std::move(sq2));
    squares.push_back(std::move(sq3));
}

void RandomSquare::doStepAction(std::shared_ptr<Piece> player)
{
    std::cout << "stepping on random square" << std::endl;
    auto square = randomizeSquare();
    square->doStepAction(player);
}

void RandomSquare::doPassAction(std::shared_ptr<Piece> player)
{
    std::cout << "passing by random square" << std::endl;
    auto square = randomizeSquare();
    square->doPassAction(player);
}

std::shared_ptr<ISquare> RandomSquare::randomizeSquare()
{
    return squares[rand()%squares.size()];
}

