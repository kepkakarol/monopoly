#pragma once

#include "ISquare.h"
#include <iostream>

class DepositSquare : public ISquare
{
public:
    DepositSquare();

    virtual void doStepAction(std::shared_ptr<Piece> player);
    virtual void doPassAction(std::shared_ptr<Piece> player);

private:
    int m_savedMoney;
    const int MONEY_TO_DEPOSIT = 125;
};

