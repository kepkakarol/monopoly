
#include "StartSquare.h"

void StartSquare::doAction(std::shared_ptr<Player> player)
{
    player->earnMoney(startMoney);
}