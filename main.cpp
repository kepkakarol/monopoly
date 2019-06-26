#include <iostream>
#include "Game.h"
#include "Board.h"
#include "Cubes.hpp"


int main() {

    auto board = std::make_shared<Board>();

    Game b(std::make_shared<Cubes>(), board);
    b.addPlayer(std::make_shared<Player>(0));
    b.addPlayer(std::make_shared<Player>(1));
    b.startGame();

    return 0;

}
