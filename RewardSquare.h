#pragma once

#include "Square.h"
#include "iostream"
#include <memory>
#include "Player.h"

class RewardSquare : public Square {

public:
    void doAction();

private:
    std::shared_ptr<Player> player;
    const int money = 500;
};
