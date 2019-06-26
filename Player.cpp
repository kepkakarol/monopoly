#include "Player.h"
#include "Iterator.h"

Player::Player(Iterator moveIterator, std::string name):m_positionOnBoard(moveIterator), m_name(name), m_money(2000) {

}

void Player::payMoney(int money)
{
    m_money -= money;
}

void Player::earnMoney(int money)
{
    m_money += money;
}

const int Player::getMoneyAmount()
{
    return m_money;
}

const std::string Player::getName()
{
    return m_name;
}

void Player::makeMove(int step) {
    if(isBankrupt()) return;

    performPassingMoves(step);
    performStepMove();
}

void Player::performPassingMoves(int step)
{
    for(auto i = 0; i < step - 1; i++)
    {
        m_positionOnBoard++;
        (*m_positionOnBoard).doPassAction(*this);
        (*m_positionOnBoard).doPassAction(*this);
    }
}

void Player::performStepMove()
{
    m_positionOnBoard++;
    (*m_positionOnBoard).doStepAction(*this);
}

bool Player::isBankrupt()
{
    if(m_money < 0)
    {
        std::cout << m_name << " is out of money!" << std::endl;
        return true;
    }
    return false;

}



