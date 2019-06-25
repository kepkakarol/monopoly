#include <iostream>
#include <vector>
#include <memory>
#include "Player.h"

class Square;

class Board {

public:
    Board();
    void startGame();

    std::vector<std::shared_ptr<Square>> squares;
    std::vector<std::shared_ptr<Player>> players;
};
