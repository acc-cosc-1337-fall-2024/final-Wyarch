#include "die.h"

#ifndef ROLL
#define ROLL

class Roll
{
    public:
        Roll(Die& die1,Die& die2) : die1(die1), die2(die2) {};
        void roll_dice();
        int const roll_value(){return rolled_value;}

    private:
        Die& die1;
        Die& die2;
        int rolled_value;
};

#endif