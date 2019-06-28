#include <iostream>
#include "PrisonSquare.h"
#include "Player.h"

void PrisonSquare::doStepAction(std::shared_ptr<Piece> player)
{
    std::cout << "you go to prison!" << std::endl;
    player->imprison(3);
}

void PrisonSquare::doPassAction(std::shared_ptr<Piece> player)
{
    std::cout << "passing by prison" << std::endl;
}
