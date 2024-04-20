#ifndef RENICE_C
#define RENICE_C

#ifdef PROC_TIMES
#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    for(int i = 2; i < argc; i++) {
	renice(atoi(argv[1]), atoi(argv[i]));
    }

    exit();
}

#endif // PROC_TIMES
#endif // RENICE_C
