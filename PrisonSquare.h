#ifndef MONOPOLY_PRISONSQUARE_H
#define MONOPOLY_PRISONSQUARE_H


#include "ISquare.h"

class Player;

class PrisonSquare : public ISquare
{
public:
    void doStepAction(std::shared_ptr<Piece> player) override;
    void doPassAction(std::shared_ptr<Piece> player) override;
};


#endif //MONOPOLY_PRISONSQUARE_H
