#pragma once
#include <memory>

class Player;

class ISquare
{
public:

    virtual void doStepAction(Player &player) = 0;
    virtual void doPassAction(Player &player) = 0;

};