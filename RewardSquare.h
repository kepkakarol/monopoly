#pragma once

#include "Square.h"
#include "iostream"
#include <memory>
#include "Player.h"

class RewardSquare : public Square
{
public:

    void doAction(std::shared_ptr<Player>);
    void doPassAction(std::shared_ptr<Player> player);

private:

    const int MONEY = 500;
};
