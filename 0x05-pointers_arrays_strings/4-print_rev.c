#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 *
 * This function takes a pointer to a null-terminated string and prints the
 * characters of the string in reverse order. It calculates the length of the
 * string,then iterates through the string in reverse, printing each character.
 * After printing the reversed string, a newline character is printed.
 *
 * @s: Pointer to the null-terminated string to be printed in reverse.
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;

	/* Print characters in reverse order */
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	/* Print a newline character */
	_putchar('\n');
}
