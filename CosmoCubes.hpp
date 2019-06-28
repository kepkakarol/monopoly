#ifndef MONOPOLY_COSMOCUBES_HPP
#define MONOPOLY_COSMOCUBES_HPP


#include <cstdlib>
#include "Cubes.hpp"

class CosmoCubes : public Cubes {

protected:
    int onceThrow()
    {
        return rand() % 3 + 1;
    }

};


#endif //MONOPOLY_COSMOCUBES_HPP
