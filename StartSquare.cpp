
#include "StartSquare.h"

void StartSquare::doAction(std::shared_ptr<Player> player)
{
    std::cout<<"stepping on start square" <<std::endl;
    player->earnMoney(START_MONEY);
}

void StartSquare::doPassAction(std::shared_ptr<Player> player) {
    std::cout<<"passing by start square" <<std::endl;
}

