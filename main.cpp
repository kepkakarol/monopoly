#include <iostream>
#include "Game.h"
#include "Cubes.hpp"


int main() {


    Game b(std::make_shared<Cubes>());
    b.startGame();

    return 0;

}
