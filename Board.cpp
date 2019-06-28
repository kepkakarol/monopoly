#include "Board.h"
#include "StartSquare.h"
#include "RewardSquare.h"
#include "PunishmentSquare.h"
#include "DepositSquare.h"
#include "MansionSquare.h"
#include "Iterator.h"
#include "RandomSquare.h"
#include "BlackHoleSquare.h"
#include "PrisonSquare.h"

Board::Board() {
    initBoard();
}

void Board::initBoard() {
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<StartSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<MansionSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<PunishmentSquare>())));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<RandomSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<PrisonSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<MansionSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<BlackHoleSquare>(std::make_shared<RewardSquare>())));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<DepositSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<RandomSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<PrisonSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<ISquare>(std::make_shared<PunishmentSquare>()));
}

Iterator Board::getIterator() {
    return Iterator(squares.begin(), squares.end());
}






