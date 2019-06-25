#pragma once

#include "Square.h"

class PunishmentSquare : public Square
{
public:

    void doAction(std::shared_ptr<Player>);

private:

    const int money = 500;
};

