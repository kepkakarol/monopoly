#pragma once

#include "ISquare.h"
#include "iostream"
#include <memory>
#include "Player.h"

class RewardSquare : public ISquare
{
public:

    void doStepAction(std::shared_ptr<Piece>);
    void doPassAction(std::shared_ptr<Piece> player);

private:

    const int MONEY = 500;
};
