#pragma once

#include "ISquare.h"
#include <iostream>

class PunishmentSquare : public ISquare
{
public:

    void doStepAction(std::shared_ptr<Piece>) override;
    void doPassAction(std::shared_ptr<Piece> player) override;

private:

    const int MONEY = 500;
};

