#ifndef NICE_C
#define NICE_C

#ifdef PROC_TIMES
#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    renice(atoi(argv[1]), getpid());
    exec(argv[2], &argv[2]);

    exit();
}

#endif // PROC_TIMES
#endif // NICE_C
