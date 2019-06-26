#include <iostream>
#include <vector>
#include <memory>
#include "Player.h"

class ISquare;
class ICubes;
class Board;

class Game
{
public:

    Game(std::shared_ptr<ICubes> p_cubesThrower, std::shared_ptr<Board> board);
    void startGame();
    void addPlayer(std::string);

    std::vector<std::shared_ptr<Player>> players;

private:

    std::shared_ptr<Board> m_board;
    std::shared_ptr<ICubes> m_cubes;
    const int ROUNDS = 3;

    void playRound() const;
};
