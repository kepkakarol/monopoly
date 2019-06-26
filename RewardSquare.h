#pragma once

#include "ISquare.h"
#include "iostream"
#include <memory>
#include "Player.h"

class RewardSquare : public ISquare
{
public:

    void doStepAction(Player &);
    void doPassAction(Player &player);

private:

    const int MONEY = 500;
};
