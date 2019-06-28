#ifndef MONOPOLY_BOARDFACTORY_H
#define MONOPOLY_BOARDFACTORY_H

#include <iostream>
#include <memory>

class Board;
class ISquare;

class BoardFactory {

public:
    std::shared_ptr<Board> createRegularBoard();
    std::shared_ptr<Board> createCosmoBoard();

private:
    std::vector<std::shared_ptr<ISquare>> createRegularSquares();
    std::vector<std::shared_ptr<ISquare>> createCosmoSquares();
};


#endif //MONOPOLY_BOARDFACTORY_H
