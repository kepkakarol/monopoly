#pragma once

#include "Square.h"
#include <iostream>
#include <memory>
#include "Player.h"

class StartSquare : public Square
{
public:

    StartSquare() = default;
    void doAction(std::shared_ptr<Player>);

private:

    const int START_MONEY = 100;
};

