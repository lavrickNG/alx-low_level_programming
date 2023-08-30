#include <main.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * This function recursively prints each character of the given string.
 * It prints a new line character at the end to move to the next line.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');

		return;
	}

	putchar(*s);

	_puts_recursion(s + 1);
}

/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the _puts_recursion function
 * by printing a sample string followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "Hello, world!";

	_puts_recursion(str);

	return (0);
}
