#include <iostream>
#include <random>

#ifndef DIE
#define DIE

class Die
{
    public:
        int roll();
    private:
        int sides{6};
};

#endif