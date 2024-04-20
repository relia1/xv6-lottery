#ifndef RAND_H
#define RAND_H

#ifndef RAND_MAX
#define RAND_MAX (1 << 31)
#endif // RAND_MAX

unsigned int rand(void);
void srand(unsigned int seed);

#endif // RAND_H
