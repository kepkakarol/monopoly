#pragma once

class Player {

public:

    Player(int id);
    void payMoney(int money);
    void earnMoney(int money);
    int getId();

private:

    int m_id;
    int m_money;
};
