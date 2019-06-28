#include "Player.h"
#include "Iterator.h"

Player::Player(Iterator moveIterator, std::shared_ptr<TransactionDecider> decider, std::string name) :m_positionOnBoard(moveIterator),
                                                                                              m_name(name),
                                                                                              m_money(2000),
                                                                                              buyDecider(std::move(decider))
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

const int Player::getMoneyAmount()
{
    return m_money;
}

const std::string Player::getName()
{
    return m_name;
}

void Player::makeMove(int step)
{
    if(isWaiting())
    {
        std::cout << getName() << " " << "I am staying in prison" << std::endl;
        decrementWaitingCounter();
        return;
    }

    std::cout << getName() << " " << "making move" << std::endl;

    if(isBankrupt()) return;
    performPassingMoves(step);
    performStepMove();
}

void Player::performPassingMoves(int step)
{
    for(auto i = 0; i < step - 1; i++)
    {
        m_positionOnBoard++;
        (*m_positionOnBoard).doPassAction(shared_from_this());
    }
}

void Player::performStepMove()
{
    m_positionOnBoard++;
    (*m_positionOnBoard).doStepAction(shared_from_this());
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

bool Player::buyMantion(int price)
{
    return buyDecider->shouldBuy(m_money, price);
}

bool Player::isWaiting()
{
    return roundsToWait > 0;
}

void Player::imprisonPlayer(const int rounds)
{
    roundsToWait = rounds;
}

void Player::decrementWaitingCounter()
{
    roundsToWait--;
}



