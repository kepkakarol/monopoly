
#include "RewardSquare.h"

void RewardSquare::doAction(std::shared_ptr<Player> player)
{
    std::cout<<"stepping on reward square" <<std::endl;
    player->earnMoney(MONEY);
}

void RewardSquare::doPassAction(std::shared_ptr<Player> player) {
    std::cout<<"Passing by reward square" <<std::endl;
}
