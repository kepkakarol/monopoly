
#include <iostream>
#include <vector>
#include <memory>
#include <memory>
#include <map>
#include "Square.h"



class Board {
public:

    Board();
    void makeAMove(std::shared_ptr<Player>, int step);

private:

    void initBoard();

    std::map<int,int> playerPosition;
    std::vector<std::shared_ptr<Square>> squares;


    bool isPlayerPassingByStart(std::shared_ptr<Player> sharedPtr);

    void makeAStepMove(std::shared_ptr<Player> player);

    void incrementPlayerPostion(std::shared_ptr<Player> &player);

    void performPassingMoves(std::shared_ptr<Player> sharedPtr, int step);

    void makeAPassMove(std::shared_ptr<Player> sharedPtr);

    void performStepMove(std::shared_ptr<Player> sharedPtr);
};

