//
// Created by wojtysia on 28.06.19.
//

#ifndef MONOPOLY_RANDOMTRANSACTIONDECIDER_H
#define MONOPOLY_RANDOMTRANSACTIONDECIDER_H


#include "TransactionDecider.h"

class RandomTransactionDecider : public TransactionDecider
{
public:
    RandomTransactionDecider();
    bool shouldBuy(int, int) override;
private:
    const int MAX_RAND = 100;
    const int PROBABILITY = 50;
};


#endif //MONOPOLY_RANDOMTRANSACTIONDECIDER_H
