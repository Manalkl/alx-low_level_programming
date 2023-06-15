#include <stdio.h>

/**
 * is_palindrome - Check if a number is a palindrome
 * @num: The number to check
 *
 * Return: 1 if the number is a palindrome, 0 otherwise
 */

/* Check if a number is a palindrome */
int is_palindrome(int num)
{
	int reversed = 0;
	int original = num;

	while (num > 0)
	{
		int digit = num % 10;

		reversed = reversed * 10 + digit;
		num /= 10;
	}

	return (reversed == original);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* Entry point of the program */

int main(void)
{
	int largest_palindrome = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = i; j < 1000; j++)
		{
			int product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}

	/* Save the result 906609 in  "102-result"*/

	FILE *file = fopen("102-result", "w");

	if (file == NULL)
	{
		printf("Error opening file\n");
		return (1);
	}

	fprintf(file, "%d", largest_palindrome);
	fclose(file);

	return (0);
}
