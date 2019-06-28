#pragma once
#include <memory>

class Piece;

class ISquare
{
public:

    virtual void doStepAction(std::shared_ptr<Piece> player) = 0;
    virtual void doPassAction(std::shared_ptr<Piece> player) = 0;

};