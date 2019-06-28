#include "PunishmentSquare.h"
#include "Player.h"


void PunishmentSquare::doStepAction(std::shared_ptr<Piece> player)
{
    std::cout<<"stepping on punishment square; " << "-" << MONEY <<std::endl;
    player->payMoney(MONEY);
}

void PunishmentSquare::doPassAction(std::shared_ptr<Piece> player) {
    std::cout<<"passing by punishment square" <<std::endl;
}
