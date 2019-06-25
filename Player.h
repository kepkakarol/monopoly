#pragma once

class Player {



public:

    Player(int id);
    void payMoney(int money);
    void earnMoney(int money);
private:
    int id;
    int m_money;

};
