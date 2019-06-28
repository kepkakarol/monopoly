#ifndef MONOPOLY_MANSIONSQUARE_H
#define MONOPOLY_MANSIONSQUARE_H


#include "ISquare.h"

class Player;

class MansionSquare : public ISquare{

    void doStepAction(std::shared_ptr<Piece> player) override;
    void doPassAction(std::shared_ptr<Piece> player) override;

private:

    std::weak_ptr<Piece> mansionOwner;
    const int PRICE = 600;

};

#endif //MONOPOLY_MANSIONSQUARE_H
