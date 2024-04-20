#ifndef RANDOM_C
#define RANDOM_C

#ifdef PROC_TIMES
#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if(argc > 1) {
	srand(atoi(argv[1]));
    }

    for(int i = 0; i < 10; i++) {
	printf(1, "random number is: %u\n", rand());
    }

    exit();
}

#endif // PROC_TIMES
#endif // RANDOM_C
