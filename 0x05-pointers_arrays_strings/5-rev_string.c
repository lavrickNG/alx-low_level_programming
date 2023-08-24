#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the input string to be reversed.
 *
 * This function takes an input string and reverses its contents in place.
 * It iterates through the string characters and swaps them symmetrically
 * to achieve the reversal effect.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

