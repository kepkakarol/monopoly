#pragma once
#include <memory>
#include "Player.h"


class Square
{

    virtual void doAction(std::shared_ptr<Player> player) = 0;

};