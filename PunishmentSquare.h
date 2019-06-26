#pragma once

#include "ISquare.h"
#include <iostream>

class PunishmentSquare : public ISquare
{
public:

    void doStepAction(Player &) override;
    void doPassAction(Player &player) override;

private:

    const int MONEY = 500;
};

