#pragma once
#include <memory>
#include "Player.h"


class ISquare
{
public:

    virtual void doStepAction(std::shared_ptr<Player> player) = 0;
    virtual void doPassAction(std::shared_ptr<Player> player) = 0;

};