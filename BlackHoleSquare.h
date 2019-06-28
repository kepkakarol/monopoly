#ifndef MONOPOLY_BLACKHOLESQUARE_H
#define MONOPOLY_BLACKHOLESQUARE_H


#include "ISquare.h"

class BlackHoleSquare : public ISquare {
public:

    BlackHoleSquare(const std::shared_ptr<ISquare> &square);

    void doStepAction(std::shared_ptr<Piece> player);
    void doPassAction(std::shared_ptr<Piece> player);

private:
    int counter = 0;
    std::shared_ptr<ISquare> square;

    bool shouldSwitch();

    void incrementCounter();
};


#endif //MONOPOLY_BLACKHOLESQUARE_H
