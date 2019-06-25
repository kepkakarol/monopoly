//
// Created by wojtysia on 25.06.19.
//

#include "Player.h"

Player::Player(int _id) : id(_id), m_money(0)
{

}

void Player::payMoney(int money)
{
    
}

void Player::earnMoney(int money)
{
    m_money += money;
}
