#include "phase.h"

#ifndef POINT_PHASE
#define POINT_PHASE

class PointPhase:public phase
{
    public:
        PointPhase(int p);
        RollOutcome get_outcome(Roll* roll);
    private:
        int point;
};

#endif