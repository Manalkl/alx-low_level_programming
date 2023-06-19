#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>

int rand(void)
{
    return 9;
}

int rand_r(unsigned int *seed)
{
    return 8;
}

int srand(unsigned int seed)
{
    return 7;
}

void *malloc(size_t size)
{
    return NULL;
}

unsigned int sleep(unsigned int seconds)
{
    return 23;
}

int gettimeofday(struct timeval *restrict tp, void *restrict tzp)
{
    return 74;
}

size_t fwrite(const void *restrict ptr, size_t size, size_t nmemb, FILE *restrict stream)
{
    return nmemb;
}
