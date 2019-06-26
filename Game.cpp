#include "Game.h"
#include "Player.h"
#include "RewardSquare.h"
#include "StartSquare.h"
#include "PunishmentSquare.h"
#include "Cubes.hpp"
#include "Board.h"



Game::Game(std::shared_ptr<ICubes> p_cubesThrower, std::shared_ptr<Board> p_board) : m_cubes(std::move(p_cubesThrower)), m_board(std::move(p_board))
{

}

void Game::addPlayer(std::shared_ptr<Player> player)
{
    players.push_back(std::move(player));
}

void Game::startGame()
{
    std::cout<<"Game has started"<<std::endl;

    for(auto player : players)
    {
        auto result = m_cubes->throwCube();
        std::cout << result << std::endl;
        m_board->makeAMove(player, result);
        std::cout << "Amount of money: " << player->getMoneyAmount() << std::endl;
        std::cout << std::endl;
    }
}


