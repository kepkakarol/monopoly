#pragma once
#include <iostream>

class Player {

public:

    Player(int id, std::string name);
    void payMoney(int money);
    void earnMoney(int money);
    const int getId();
    const int getMoneyAmount();
    const std::string getName();
private:

    int m_id;
    int m_money;
    std::string m_name;
public:

};
