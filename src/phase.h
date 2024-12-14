#include "shooter.h"

#ifndef PHASE
#define PHASE

enum class RollOutcome
{
    natural,
    craps,
    point,
    seven_out,
    nopoint
};

class phase
{
    public:
    RollOutcome get_outcome(Roll* roll);
};

#endif