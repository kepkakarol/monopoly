#include "Board.h"
#include "StartSquare.h"
#include "RewardSquare.h"
#include "PunishmentSquare.h"
#include "DepositSquare.h"

Board::Board() {
    initBoard();
}

void Board::makeAMove(std::shared_ptr<Player> player, int step)
{
    performPassingMoves(player, step);
    performStepMove(player);
}

void Board::performPassingMoves(std::shared_ptr<Player> player, int step)
{
    for(int i = 0; i < step - 1; i++)
    {
        makeAPassMove(player);
    }
}

void Board::makeAPassMove(std::shared_ptr<Player> player)
{
    incrementPlayerPostion(player);
    squares[playerPosition[player->getId()]]->doPassAction(player);
}

void Board::performStepMove(std::shared_ptr<Player> player)
{
    incrementPlayerPostion(player);
    squares[playerPosition[player->getId()]]->doStepAction(player);
}

void Board::incrementPlayerPostion(std::shared_ptr<Player> player) 
{
    auto playerId = player->getId();
    auto newPosition = playerPosition[playerId] + 1;

    playerPosition[playerId] = isPostitionOffBoard(newPosition) ? 0 : newPosition;
}

bool Board::isPostitionOffBoard(int newPosition) const 
{ 
    return newPosition >= squares.size(); 
}

void Board::initBoard() {
    squares.push_back(std::shared_ptr<Square>(std::make_shared<StartSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<DepositSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<DepositSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<PunishmentSquare>()));
}






