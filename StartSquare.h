#pragma once

#include "ISquare.h"
#include <iostream>
#include <memory>
#include "Player.h"

class StartSquare : public ISquare
{
public:

    StartSquare() = default;
    void doStepAction(std::shared_ptr<Piece>);
    void doPassAction(std::shared_ptr<Piece> player);
private:

    const int START_MONEY = 100;
};

