#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * This function takes two integer pointers as parameters and swaps the values
 * of the integers they point to. After calling this function, the values of
 * 'a' and 'b' will be exchanged.
 *
 * @a: Pointer to the first integer to be swapped.
 * @b: Pointer to the second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
