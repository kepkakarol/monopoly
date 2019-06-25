#include "PunishmentSquare.h"

void PunishmentSquare::doAction(std::shared_ptr<Player> player)
{
    std::cout<<"stepping on punishment square; " << "-" << MONEY <<std::endl;
    player->payMoney(MONEY);
}

void PunishmentSquare::doPassAction(std::shared_ptr<Player> player) {
    std::cout<<"passing by punishment square" <<std::endl;
}
