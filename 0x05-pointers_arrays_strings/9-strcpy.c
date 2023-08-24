#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src
 *
 * This function copies the string pointed by src (including null-terminator)
 * to the buffer pointed to by dest.
 *
 * @dest: Buffer to copy the string to.
 * @src: String to be copied.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int index = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (; index < length; index++)
	{
		dest[index] = src[index];
	}

	dest[length] = '\0';
	return (dest);
}
