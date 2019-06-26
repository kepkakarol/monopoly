#pragma once
#include <iostream>
#include "Board.h"

class Player {

public:
    Player(Iterator moveIterator, std::string name);
    void payMoney(int money);
    void earnMoney(int money);

    const int getMoneyAmount();
    const std::string getName();
    void makeMove(int step);
private:

    int m_id;
    int m_money;
    std::string m_name;
    Iterator m_positionOnBoard;

    void performPassingMoves(int step);

    void performStepMove();

    bool isBankrupt();
};
