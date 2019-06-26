
#include "StartSquare.h"

void StartSquare::doStepAction(Player &player)
{
    std::cout<<"stepping on start square" <<std::endl;
}

void StartSquare::doPassAction(Player &player) {
    std::cout<<"passing by starting square; " << "+" << START_MONEY << std::endl;
    player.earnMoney(START_MONEY);
}

