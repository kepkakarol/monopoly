
#include "RewardSquare.h"

void RewardSquare::doAction(std::shared_ptr<Player> player)
{
    std::cout<<"stepping on reward square; " << "+" << MONEY << std::endl;
    player->earnMoney(MONEY);
}

void RewardSquare::doPassAction(std::shared_ptr<Player> player) {
    std::cout<<"passing by reward square" <<std::endl;
}
