#include "Game.h"
#include "Player.h"
#include "RewardSquare.h"
#include "StartSquare.h"
#include "time.h"
#include "PunishmentSquare.h"


Game::Game()
{
    initCubes();
    initPlayers();
    initBoard();
}

void Game::initCubes()
{
    srand(time(0));
}

void Game::initBoard()
{
    squares.push_back(std::shared_ptr<Square>(std::make_shared<StartSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<RewardSquare>()));
    squares.push_back(std::shared_ptr<Square>(std::make_shared<PunishmentSquare>()));
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

        //board->makeAMove(player, step);

        std::cout << throwCube() << std::endl;
        std::cout << throwCube() << std::endl;
        std::cout << std::endl;
    }
}

int Game::throwCube()
{
    return rand() % 5 + 1;
}


