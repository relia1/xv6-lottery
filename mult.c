#ifndef MULT_C
#define MULT_C
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

// The single real purpose for mult is to have a compute
// intensive program that runs for a long time.

#ifndef MAXINT
# define MAXINT 2147483647
#endif // MAXINT

#ifndef MAXSHORT
# define MAXSHORT 32767
#endif // MAXSHORT

int
main(int argc, char *argv[])
{
    int i;
    int j;
    int max = MAXINT;
    int sum = 0;

    if(argc > 1) {
        // change the upper bound on the iteration loops.
        max = atoi(argv[1]);
    }
    printf(1, "mult begin: pid = %d     max = %d\n", getpid(), max);

    for (j = 0; j < max; j++) {
        for(i = 1; i < max; i++) {
            sum ++;
	    // 1073676289 is MAX_SHORT * MAX_SHORT
            if (sum % (MAXSHORT * MAXSHORT) == 0) {
                printf(1, "  mult: %d  %d\n", getpid(), sum);
            }
	    // MAX / 2 = 1073741823
            if (sum > (MAXINT / 2)) {
                sum = 0;
            }
        }
    }
    printf(1, "mult done: pid = %d\n", getpid());

    // in xv6, exit() does not take a parameter.
    exit();
}
#endif // MULT_C
