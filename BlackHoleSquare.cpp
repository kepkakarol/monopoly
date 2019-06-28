#include "BlackHoleSquare.h"

void BlackHoleSquare::doStepAction(std::shared_ptr<Piece> player)
{
    if(shouldSwitch())
    {
        square->doStepAction(player);
        incrementCounter();
    }

}

void BlackHoleSquare::doPassAction(std::shared_ptr<Piece> player)
{
    square->doPassAction(player);
}

BlackHoleSquare::BlackHoleSquare(const std::shared_ptr<ISquare> &square) : square(square) {}

bool BlackHoleSquare::shouldSwitch() {
    return not counter % 2;
}

void BlackHoleSquare::incrementCounter() {
    counter++;
}
