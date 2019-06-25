#include "Game.h"
#include "Player.h"
#include "RewardSquare.h"
#include "StartSquare.h"
#include "time.h"


Game::Game()
{
    srand(time(0));

    initPlayers();
    initBoard();
}

void Game::initBoard()
{
    squares.push_back(std::shared_ptr<Square>(std::make_shared<StartSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<RewardSquare>()));
}

void Game::initPlayers()
{
    players.push_back(std::make_shared<Player>(0));
    players.push_back(std::make_shared<Player>(1));
}

void Game::startGame()
{
    std::cout<<"Game has started"<<std::endl;

    for(auto player : players)
    {
        std::cout << throwCube() << std::endl;
        std::cout << throwCube() << std::endl;
        std::cout << std::endl;
    }
}

int Game::throwCube()
{
    return rand() % 6;
}


