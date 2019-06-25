#include "PunishmentSquare.h"

void PunishmentSquare::doAction(std::shared_ptr<Player> player)
{
    player->payMoney(800);
}