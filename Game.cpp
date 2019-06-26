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

void Game::addPlayer(std::string name) {
    players.push_back(std::make_shared<Player>(m_board->getIterator(), name));
}

void Game::startGame()
{
    std::cout<<"Game has started"<<std::endl;

    for(auto roundNb = 0; roundNb < ROUNDS; roundNb++)
    {
        std::cout <<"Round nb "<<roundNb <<std::endl;
        playRound();
    }

}

void Game::playRound() const {
    for (auto player : players) {
        std::cout << player->getName() << " " << "making move" << std::endl;

        auto result = m_cubes->throwCube();
        std::cout << result << std::endl;
        player->makeMove(result);
        std::cout << "Amount of money: " << player->getMoneyAmount() << std::endl;
        std::cout << std::endl;
    }
}




