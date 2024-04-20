#ifndef RAND_C
#define RAND_C

#include "rand.h"

static unsigned long next = 1;

unsigned int rand(void)
{
    next = next * 1103515245 + 12345;
    return((unsigned)(next/65536) % RAND_MAX);
}

void srand(unsigned int seed)
{
    next = seed;
}

#endif // RAND_C
