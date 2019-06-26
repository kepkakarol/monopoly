#include "Player.h"

Player::Player(int _id, std::string name) : m_id(_id), m_money(2000), m_name(name)
{

}

void Player::payMoney(int money)
{
    m_money -= money;
}

void Player::earnMoney(int money)
{
    m_money += money;
}

const int Player::getId()
{
    return m_id;
}

const int Player::getMoneyAmount()
{
    return m_money;
}

const std::string Player::getName()
{
    return m_name;
}

