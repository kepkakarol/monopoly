//
// Created by wojtysia on 28.06.19.
//

#include <cstdlib>
#include <time.h>
#include "RandomTransactionDecider.h"
#include <iostream>

bool RandomTransactionDecider::shouldBuy(int money, int price)
{
    std::cout << "I am random!" << std::endl;
    if(money < price) return false;

    auto score = rand() % MAX_RAND;
    return score > PROBABILITY;
}

RandomTransactionDecider::RandomTransactionDecider()
{
    srand(time(NULL));
}
