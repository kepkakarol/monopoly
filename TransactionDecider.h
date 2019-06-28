#ifndef MONOPOLY_TRANSACTIONDECIDER_H
#define MONOPOLY_TRANSACTIONDECIDER_H


class TransactionDecider
{
public:
    virtual bool shouldBuy(int, int) = 0;
};


#endif //MONOPOLY_TRANSACTIONDECIDER_H
