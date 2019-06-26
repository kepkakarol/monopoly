#pragma once

#include "ISquare.h"
#include <iostream>

class PunishmentSquare : public ISquare
{
public:

    void doStepAction(std::shared_ptr<Player>);
    void doPassAction(std::shared_ptr<Player> player);

private:

    const int MONEY = 500;
};

