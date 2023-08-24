#include "main.h"
/**
 * _puts - Prints a string followed by a newline.
 *
 * This function takes a pointer to a null-terminated string and outputs each
 * character of the string using the _putchar function. After printing the
 * entire string, a newline character is printed to move to the next line.
 *
 * @str: Pointer to the null-terminated string to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
