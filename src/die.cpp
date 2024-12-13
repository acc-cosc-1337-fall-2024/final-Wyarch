#include "die.h"

int Die::roll()
{
    return 1 + (std::rand() % (6 - 1 + 1));
}