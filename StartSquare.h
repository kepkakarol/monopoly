#pragma once

#include "Square.h"
#include <iostream>
#include <memory>
#include "Player.h"

class StartSquare : public Square{
public:

    void doAction();
    StartSquare() = default;
private:
    const int startMoney = 100;
    std::shared_ptr<Player> player;
};

