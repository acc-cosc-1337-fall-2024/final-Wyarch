#include "shooter.h"

Shooter::~Shooter()
{
    for(int i = 0; i < rolls.size(); i++)
    {
        delete rolls[i];
    }
}

Roll* Shooter::throw_dice(Die& die1,Die& die2)
{
    Roll* Rollptr = new Roll(die1,die2);
    Rollptr->roll_dice();
    rolls.push_back(Rollptr);
    return Rollptr;
}

void Shooter::display_rolled_values()
{
    for(int i = 0; i < rolls.size(); i++)
    {
        std::cout<<"Roll "<<i+1<<":\n";
        std::cout<<rolls[i]->roll_value()<<"\n\n";
    }
}