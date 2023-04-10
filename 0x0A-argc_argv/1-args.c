#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments on the command line
 * @argv: an array of character pointers
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
