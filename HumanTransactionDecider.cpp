//
// Created by wojtysia on 28.06.19.
//

#include "HumanTransactionDecider.h"
#include <iostream>

bool HumanTransactionDecider::shouldBuy(int money, int price)
{
    std::cout << "Do you want to but a mansion for " << price << std::endl;
    std::cout << "Your account balance is " << money << std::endl;

    int decision;
    std::cin >> decision;

    if(decision)
    {
        std::cout << "You decided to buy" << std::endl;
        return true;
    }
    else
    {
        std::cout << "You decided no to buy" << std::endl;
        return false;
    }

}
