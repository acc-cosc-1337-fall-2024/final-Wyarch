#include "phase.h"

#ifndef COMEOUTPHASE
#define COMEOUTPHASE

class ComeOutPhase:public phase
{
    public:
        RollOutcome get_outcome(Roll* roll);
};

#endif