#include <stdio.h>

/**
 * print_digit - Prints a single digit character.
 * @digit: The digit to be printed.
 */
void print_digit(int digit)
{
	putchar(digit + '0');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		print_digit(i);
	}

	putchar('\n');

	return (0);
}
