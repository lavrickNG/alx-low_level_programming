#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * This function takes a pointer to a null-terminated string and calculates
 * the number of characters in the string. The length does not include the
 * null terminator itself.
 *
 * @s: Pointer to the null-terminated string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
