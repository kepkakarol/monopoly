#pragma once

#include "Square.h"
#include <iostream>

class DepositSquare : public Square
{
public:
    DepositSquare();

    virtual void doAction(std::shared_ptr<Player> player);
    virtual void doPassAction(std::shared_ptr<Player> player);

private:
    int m_savedMoney;
    const int MONEY_TO_DEPOSIT = 125;
};

