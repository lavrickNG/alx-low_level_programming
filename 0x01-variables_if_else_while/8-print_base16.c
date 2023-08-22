#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char digit;

    /* Loop from '0' to '9' */
	for (digit = '0'; digit <= '9'; ++digit)
	{
		putchar(digit);
	}

    /* Loop from 'a' to 'f' */
	for (digit = 'a'; digit <= 'f'; ++digit)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
