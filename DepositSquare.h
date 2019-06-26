#pragma once

#include "ISquare.h"
#include <iostream>

class DepositSquare : public ISquare
{
public:
    DepositSquare();

    virtual void doStepAction(Player &player);
    virtual void doPassAction(Player &player);

private:
    int m_savedMoney;
    const int MONEY_TO_DEPOSIT = 125;
};

