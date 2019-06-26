#pragma once
#include <iostream>
#include <memory>
#include <vector>

class ISquare;

class Iterator
{
public:

    Iterator(std::vector<std::shared_ptr<ISquare>>::iterator begin,
            std::vector<std::shared_ptr<ISquare>>::iterator end);

    Iterator& operator ++();
    const Iterator operator ++(int val);
    ISquare& operator *();

private:
    std::vector<std::shared_ptr<ISquare>>::iterator m_currentPos;
    std::vector<std::shared_ptr<ISquare>>::iterator m_endPos;
    std::vector<std::shared_ptr<ISquare>>::iterator m_beginPos;

    Iterator &nextMove();
};
