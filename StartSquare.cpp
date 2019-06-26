
#include "StartSquare.h"

void StartSquare::doStepAction(std::shared_ptr<Player> player)
{
    std::cout<<"stepping on start square" <<std::endl;
    player->earnMoney(START_MONEY);
}

void StartSquare::doPassAction(std::shared_ptr<Player> player) {
    std::cout<<"passing by starting square; " << "+" << START_MONEY << std::endl;
    player->earnMoney(START_MONEY);
}

