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

    Board(std::vector<std::shared_ptr<ISquare>>);
    Iterator getIterator();

private:

    std::vector<std::shared_ptr<ISquare>> squares;

};


