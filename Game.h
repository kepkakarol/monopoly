#include <iostream>
#include <vector>
#include <memory>
#include "Player.h"
#include "Board.h"

class Square;

class Game
{
public:

    Game();
    void startGame();

    std::vector<std::shared_ptr<Player>> players;

private:
    std::shared_ptr<Board> board;

    int throwCube();
    void initCubes();
    void initPlayers();
    void initBoard();
};
