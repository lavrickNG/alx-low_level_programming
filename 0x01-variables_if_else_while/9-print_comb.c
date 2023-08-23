#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	for (int i = 0; i < 10; i++)
	{

		int ascii_code = i + 48

			putchar(ascii_code)

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
