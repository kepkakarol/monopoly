#include "Board.h"
#include "Player.h"
#include "RewardSquare.h"
#include "StartSquare.h"


Board::Board()
{
    players.push_back(std::make_shared<Player>(0));
    players.push_back(std::make_shared<Player>(1));

    squares.push_back(std::shared_ptr<Square>(new StartSquare()));
    squares.push_back(std::shared_ptr<Square>(new RewardSquare()));
}

void Board::startGame()
{
    std::cout<<"Game has started"<<std::endl;
}