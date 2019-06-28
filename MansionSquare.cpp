//
// Created by wojtysia on 28.06.19.
//

#include "MansionSquare.h"
#include "Player.h"

void MansionSquare::doStepAction(std::shared_ptr<Piece> player)
{
    std::cout << "stepping on mansion square; " << std::endl;
    if(auto owner = mansionOwner.lock())
    {
        if(player == owner)
        {
            std::cout << "Player " << player->getName() << " visiting his mansion" << std::endl;
            return;
        }
        std::cout << "Player " << player->getName() << " had to pay to " << owner->getName() << std::endl;
        player->payMoney(PRICE);
        owner->earnMoney(PRICE);
    }
    else if(player->buyMantion(PRICE))
    {
        std::cout << "Player " << player->getName() << " bought mansion" << std::endl;
        player->payMoney(PRICE);
        mansionOwner = player;
    }
}

void MansionSquare::doPassAction(std::shared_ptr<Piece> player) {
    std::cout << "passing by mansion square; " << std::endl;
}
