//
// Created by wojtysia on 28.06.19.
//

#include <iostream>
#include "PrisonSquare.h"
#include "Player.h"

void PrisonSquare::doStepAction(std::shared_ptr<Piece> player)
{
    std::cout << "you go to prison!" << std::endl;
    player->imprisonPlayer(3);
}

void PrisonSquare::doPassAction(std::shared_ptr<Piece> player)
{
    std::cout << "passing by prison" << std::endl;
}
