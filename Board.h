#include "Square.h"
#include <iostream>
#include <vector>
#include <memory>


class Board {

public:
    Board();

    void startGame();

    std::vector<Square> squares;

};
