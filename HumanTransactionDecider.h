//
// Created by wojtysia on 28.06.19.
//

#ifndef MONOPOLY_HUMANTRANSACTIONDECIDER_H
#define MONOPOLY_HUMANTRANSACTIONDECIDER_H


#include "TransactionDecider.h"

class HumanTransactionDecider : public TransactionDecider{
    bool shouldBuy(int, int);
};


#endif //MONOPOLY_HUMANTRANSACTIONDECIDER_H
