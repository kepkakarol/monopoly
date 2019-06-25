#pragma once

#include "Square.h"
#include <iostream>

class PunishmentSquare : public Square
{
public:

    void doAction(std::shared_ptr<Player>);
    void doPassAction(std::shared_ptr<Player> player);

private:

    const int MONEY = 500;
};

