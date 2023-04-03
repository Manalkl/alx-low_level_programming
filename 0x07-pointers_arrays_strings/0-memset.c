#include "main.h"

/**
 *
 * @b: Each memory location corresponds to one byte of memory
 *
 * @s: will be set to the value b
 *
 * @n: indicates the number of consecutive memory locations starting from s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
