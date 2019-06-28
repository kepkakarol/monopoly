
#include "RewardSquare.h"

void RewardSquare::doStepAction(std::shared_ptr<Piece> player)
{
    std::cout<<"stepping on reward square; " << "+" << MONEY << std::endl;
    player->earnMoney(MONEY);
}

void RewardSquare::doPassAction(std::shared_ptr<Piece> player) {
    std::cout<<"passing by reward square" <<std::endl;
}
