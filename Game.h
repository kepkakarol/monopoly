#include <iostream>
#include <vector>
#include <memory>
#include "Player.h"

class Square;

class Game
{
public:

    Game();
    void startGame();

    std::vector<std::shared_ptr<Square>> squares;
    std::vector<std::shared_ptr<Player>> players;

private:

    int throwCube();
    void initCubes();
    void initPlayers();
    void initBoard();
};
