
#include "StartSquare.h"

void StartSquare::doAction(std::shared_ptr<Player> player)
{
    std::cout<<"Money earned on initial square" <<std::endl;

    player->earnMoney(START_MONEY);
}

void StartSquare::doPassAction(std::shared_ptr<Player> player) {

}
