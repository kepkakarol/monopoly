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
    board = std::make_shared<Board>();
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

        auto result = throwCube();
        std::cout << result << std::endl;
        board->makeAMove(player, result);
        std::cout << "Amount of money: " << player->getMoneyAmount() << std::endl;

        std::cout << std::endl;
    }
}

int Game::throwCube()
{
    return rand() % 5 + 1;
}


