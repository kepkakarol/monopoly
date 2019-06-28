#ifndef MONOPOLY_RANDOMSQUARE_H
#define MONOPOLY_RANDOMSQUARE_H


#include "ISquare.h"
#include <vector>
#include <iostream>
#include <memory>

class RandomSquare : public ISquare{

public:

    RandomSquare();
    RandomSquare(std::shared_ptr<ISquare> sq1,
                 std::shared_ptr<ISquare> sq2,
                 std::shared_ptr<ISquare> sq3);
    void doStepAction(std::shared_ptr<Piece> player) override;
    void doPassAction(std::shared_ptr<Piece> player) override;

private:

    std::vector<std::shared_ptr<ISquare>> squares;
    std::shared_ptr<ISquare> randomizeSquare();
};


#endif //MONOPOLY_RANDOMSQUARE_H
