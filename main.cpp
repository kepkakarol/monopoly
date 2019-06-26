#include <iostream>
#include "Game.h"
#include "Board.h"
#include "Cubes.hpp"


int main() {

    Game b(std::make_shared<Cubes>(), std::make_shared<Board>());
    b.addPlayer("Ala");
    b.addPlayer("Krzys");
    b.startGame();

    return 0;

}
