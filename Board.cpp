//
// Created by wojtysia on 25.06.19.
//

#include "Board.h"
#include "StartSquare.h"
#include "RewardSquare.h"
#include "PunishmentSquare.h"

Board::Board() {
    initBoard();
}

void Board::makeAMove(std::shared_ptr<Player> player, int step) {

    auto postion = playerPosition[player->getId()];

    for(int i = 0; i < step - 1; i++)
    {
        makeAPassMove(player);
    }
    makeAStepMove(player);


    auto newPos = (postion + step) % squares.size();



    for(auto pos = postion; pos < playerPosition.size() || pos < newPos; pos++ )
    {
        if(pos == playerPosition.size())
            playerPosition[player->getId()] = 0;
    }
    squares[newPos]->doAction(player);
    playerPosition[player->getId()] = newPos;

}

void Board::makeAPassMove(std::shared_ptr<Player> player)
{
    if(isPlayerPassingByStart(player))
    {

    }
    else
    {
        incrementPlayerPostion(player);
        squares[playerPosition[player->getId()]]->doAction(player);
    }
}

void Board::incrementPlayerPostion(std::shared_ptr<Player> &player) {
    auto newPosition = playerPosition[player->getId()] + 1;
    playerPosition[player->getId()] = newPosition;
}

void Board::makeAStepMove(std::shared_ptr<Player> player)
{
    auto newPosition = playerPosition[player->getId()] + 1;
    playerPosition[player->getId()] = newPosition;
    squares[newPosition]->doAction(player);
}

bool Board::isPlayerPassingByStart(std::shared_ptr<Player> sharedPtr)
{
    return playerPosition[sharedPtr->getId()] > squares.size();
}

void Board::initBoard() {
    squares.push_back(std::shared_ptr<Square>(std::make_shared<StartSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<PunishmentSquare>()));
}


