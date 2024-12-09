#include "die.h"

int Die::roll()
{
    return random() % 7;
}