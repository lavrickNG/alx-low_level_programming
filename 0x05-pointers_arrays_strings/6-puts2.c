#include "main.h"
/**
 * puts2 - Print every character from input stringstarting with first character
 *
 * This function takes pointer to null-terminated string print every character
 * starting with the first character of string.skips characters at odd indices.
 *
 * @str: Pointer to the input string.
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}

	t = longi - 1;

	for (o = 0; o < t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}

	_putchar('\n');
}
