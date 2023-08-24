#include "main.h"

/**
 * print_array - Prints elements of an integer array up to a specified number.
 *
 * @a: Pointer to the integer array.
 * @n: Number of elements to be printed.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (i == n - 1)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}

