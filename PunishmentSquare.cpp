#include "PunishmentSquare.h"
#include "Player.h"


void PunishmentSquare::doStepAction(Player &player)
{
    std::cout<<"stepping on punishment square; " << "-" << MONEY <<std::endl;
    player.payMoney(MONEY);
}

void PunishmentSquare::doPassAction(Player &player) {
    std::cout<<"passing by punishment square" <<std::endl;
}
