#include "Iterator.h"
#include "ISquare.h"

Iterator::Iterator(std::vector<std::shared_ptr<ISquare>>::iterator begin,
std::vector<std::shared_ptr<ISquare>>::iterator end): m_currentPos(begin), m_beginPos(begin), m_endPos(end)
{
}

Iterator& Iterator::operator ++()
{
    return nextMove();

}

const Iterator Iterator::operator ++(int val)
{
    return nextMove();
}

Iterator& Iterator::nextMove() {
    m_currentPos++;

    if (m_currentPos == m_endPos) {
        m_currentPos = m_beginPos;
    }
    return *this;
}

ISquare& Iterator::operator *()
{
    return *(*m_currentPos);
}
