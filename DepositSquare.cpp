#include "DepositSquare.h"
#include "Player.h"

DepositSquare::DepositSquare():m_savedMoney(0)
{

}

void DepositSquare::doStepAction(std::shared_ptr<Piece> player) {
    std::cout<<"stepping on deposit square; "  << "+" << m_savedMoney << std::endl;
    player->earnMoney(m_savedMoney);
    m_savedMoney = 0;
}

void DepositSquare::doPassAction(std::shared_ptr<Piece> player) {
    std::cout<<"passing by deposit square; " << "-" << MONEY_TO_DEPOSIT;

    player->payMoney(MONEY_TO_DEPOSIT);
    m_savedMoney += MONEY_TO_DEPOSIT;

    std::cout<<" ;deposit state: " << m_savedMoney << std::endl;
}

