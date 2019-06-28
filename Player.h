#pragma once

#include <iostream>
#include "Board.h"
#include "Iterator.h"
#include "TransactionDecider.h"
#include "Piece.h"
#include <memory>

class Player : public std::enable_shared_from_this<Player>, public Piece {

public:
    Player(Iterator moveIterator, std::shared_ptr<TransactionDecider>, std::string name);
    void payMoney(int money) override;
    void earnMoney(int money) override;
    bool buyMantion(int) override;
    const int getMoneyAmount();
    const std::string getName() override;
    void makeMove(int step);
    void imprisonPlayer(int) override;
    bool isWaiting();
    void decrementWaitingCounter();
private:

    int m_money;
    int roundsToWait = 0;

    std::string m_name;
    Iterator m_positionOnBoard;
    std::shared_ptr<TransactionDecider> buyDecider;

    void performPassingMoves(int step);
    void performStepMove();
    bool isBankrupt();
};
