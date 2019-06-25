
#include "RewardSquare.h"

void RewardSquare::doAction(std::shared_ptr<Player> player)
{
    player->earnMoney(MONEY);
}
