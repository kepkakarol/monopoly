//
// Created by wojtysia on 28.06.19.
//

#include "GreedyTransactionDecider.h"
#include <iostream>

bool GreedyTransactionDecider::shouldBuy(int money, int price)
{
    std::cout << "I am greedy!" << std::endl;
    return money > price;
}
