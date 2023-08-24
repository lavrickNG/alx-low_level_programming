#include "main.h"
/**
 * puts_half - Print the second half of a string.
 *
 * This function takes pointer to null-terminated string and print second half.
 * If the length of the string is odd,the function print characters from middle
 * character to the end. If length is even, prints characters from character
 * after the middle to the end.
 *
 * @str: Pointer to the input string.
 *
 * Return: None.
 */

void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
