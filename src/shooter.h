#include "roll.h"
#include <vector>
#include <memory>

#ifndef SHOOTER
#define SHOOTER

class Shooter
{
    public:
        Roll* throw_dice(Die&,Die&);
        void display_rolled_values();
        ~Shooter();
    private:
        std::vector<Roll*> rolls;
};

#endif