//
// Created by wojtysia on 28.06.19.
//

#ifndef MONOPOLY_PIECE_H
#define MONOPOLY_PIECE_H


class Piece
{
public:

    virtual void payMoney(int money) = 0;
    virtual void earnMoney(int money) = 0;
    virtual bool buyMantion(int) = 0;
    virtual void imprisonPlayer(int) = 0;

    //TODO remove it
    virtual const std::string getName() = 0;
};


#endif //MONOPOLY_PIECE_H
