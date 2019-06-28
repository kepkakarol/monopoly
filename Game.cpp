#include "Game.h"
#include "Player.h"
#include "RewardSquare.h"
#include "StartSquare.h"
#include "PunishmentSquare.h"
#include "Cubes.hpp"
#include "Board.h"
#include "RandomTransactionDecider.h"


Game::Game(std::shared_ptr<ICubes> p_cubesThrower, std::shared_ptr<Board> p_board) : m_cubes(std::move(p_cubesThrower)), m_board(std::move(p_board))
{

}

void Game::addPlayer(std::string name, std::shared_ptr<TransactionDecider> decider)
{
    players.push_back(std::make_shared<Player>(m_board->getIterator(),std::move(decider), name));
}

void Game::startGame()
{
    std::cout<<"Game has started"<<std::endl;

    for(auto roundNb = 0; roundNb < ROUNDS; roundNb++)
    {
        std::cout << "Round nb "<< roundNb + 1 << std::endl;
        playRound();
    }

}

void Game::playRound() const {
    for (auto player : players)
    {
        std::cout << player->getName() << " " << "making move" << std::endl;
        player->makeMove(m_cubes->throwCube());
        printCurrentGameState(player);
    }
}

void Game::printCurrentGameState(std::shared_ptr<Player> &player) const
{
    std::cout << "Amount of money: " << player->getMoneyAmount() << std::endl;
    std::cout << std::endl;
}




