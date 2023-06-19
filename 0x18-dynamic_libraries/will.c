#include <stdlib.h>
#include <unistd.h>

/**
 * srand - Overwrites the srand function in the libc shared object
 * @sad: The seed to use for the random number generator. [Will be Ignored]
 */
void srand(unsigned int sad)
{
	const char *nu_txt = "9 8 10 24 75 - 9\n";
	const char *tt = "Congratulations, you win the Jackpot!\n";

	(void)sad;
	write(STDOUT_FILENO, (void *)nu_txt, 17);
	write(STDOUT_FILENO, (void *)tt, 38);
	exit(EXIT_SUCCESS);
}
