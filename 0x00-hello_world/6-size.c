#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various data types
 * Return: Always 0 (Success)
 */
int main(void)
{


	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long int));
	printf("Size of long long: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));

	return (0);
}
