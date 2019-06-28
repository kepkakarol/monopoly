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

Board::Board(std::vector<std::shared_ptr<ISquare>> p_square) : squares(std::move(p_square))
{

}

Iterator Board::getIterator() {
    return Iterator(squares.begin(), squares.end());
}






