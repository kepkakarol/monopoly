#pragma once

class Player {

public:

    Player(int id);
    void payMoney(int money);
    void earnMoney(int money);
    int getId();
    int getMoneyAmount();
private:

    int m_id;
    int m_money;
};
