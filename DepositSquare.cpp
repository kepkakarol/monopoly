//
// Created by wojtysia on 25.06.19.
//

#include "DepositSquare.h"

DepositSquare::DepositSquare():m_savedMoney(0)
{

}

void DepositSquare::doAction(std::shared_ptr<Player> player) {
    std::cout<<"passing by deposit square" <<std::endl;
    player->earnMoney(MONEY_TO_DEPOSIT);
    m_savedMoney = 0;
}

void DepositSquare::doPassAction(std::shared_ptr<Player> player) {
    std::cout<<"passing by deposit square" <<std::endl;
    player->payMoney(MONEY_TO_DEPOSIT);
    m_savedMoney += MONEY_TO_DEPOSIT;
}

