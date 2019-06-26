#pragma once

#include "ISquare.h"
#include <iostream>
#include <memory>
#include "Player.h"

class StartSquare : public ISquare
{
public:

    StartSquare() = default;
    void doStepAction(Player &);
    void doPassAction(Player &player);
private:

    const int START_MONEY = 100;
};

