#include <iostream>
#include <vector>
#include <memory>
#include "Player.h"
#include "Board.h"

class Square;
class ICubes;

class Game
{
public:

    Game(std::shared_ptr<ICubes> p_cubesThrower);
    void startGame();

    std::vector<std::shared_ptr<Player>> players;

private:
    std::shared_ptr<Board> board;
    std::shared_ptr<ICubes> m_cubes;
    

    int throwCube();
    void initCubes();
    void initPlayers();
    void initBoard();
};
