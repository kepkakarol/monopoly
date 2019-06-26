#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <memory>
#include <map>
#include "ISquare.h"

class Player;
class ISquare;
class Iterator;


class Board {
public:

    Board();
    Iterator getIterator();

private:

    void initBoard();
    std::vector<std::shared_ptr<ISquare>> squares;

};

class Iterator
{
public:
    Iterator(std::vector<std::shared_ptr<ISquare>>::iterator begin,
             std::vector<std::shared_ptr<ISquare>>::iterator end): m_currentPos(begin), m_beginPos(begin), m_endPos(end)
    {
    }

    Iterator& operator ++()
    {
        return nextMove();

    }

    const Iterator operator ++(int val)
    {
        return nextMove();
    }

    Iterator &nextMove() {
        m_currentPos++;

        if (m_currentPos == m_endPos) {
            m_currentPos = m_beginPos;
        }
        return *this;
    }

    ISquare& operator *()
    {
        return *(*m_currentPos);
    }

private:
    std::vector<std::shared_ptr<ISquare>>::iterator m_currentPos;
    std::vector<std::shared_ptr<ISquare>>::iterator m_endPos;
    std::vector<std::shared_ptr<ISquare>>::iterator m_beginPos;
};

