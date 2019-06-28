//
// Created by wojtysia on 28.06.19.
//

#ifndef MONOPOLY_GREEDYTRANSACTIONDECIDER_H
#define MONOPOLY_GREEDYTRANSACTIONDECIDER_H


#include "TransactionDecider.h"

class GreedyTransactionDecider : public TransactionDecider
{
public:
    bool shouldBuy(int, int) override;
};


#endif //MONOPOLY_GREEDYTRANSACTIONDECIDER_H
