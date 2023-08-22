#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * This program generates a random number and prints whether it's positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
	printf("The number %d is positive\n", n);
}
else if (n == 0)
{
	printf("The number %d is zero\n", n);
}
else
{
	printf("The number %d is negative\n", n);
}
return (0);
}
