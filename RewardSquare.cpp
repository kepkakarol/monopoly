
#include "RewardSquare.h"

void RewardSquare::doAction(std::shared_ptr<Player> player)
{
    std::cout<<"Money earned on reward square" <<std::endl;
    player->earnMoney(MONEY);
}

void RewardSquare::doPassAction(std::shared_ptr<Player> player) {

}
