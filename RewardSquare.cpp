
#include "RewardSquare.h"

void RewardSquare::doStepAction(Player &player)
{
    std::cout<<"stepping on reward square; " << "+" << MONEY << std::endl;
    player.earnMoney(MONEY);
}

void RewardSquare::doPassAction(Player &player) {
    std::cout<<"passing by reward square" <<std::endl;
}
