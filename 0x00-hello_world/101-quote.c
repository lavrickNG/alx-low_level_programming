#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the specified text to standard error.
 * Returns: Always returns 1 (indicating an error).
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDERR_FILENO, message, sizeof(message) - 1);
write(STDERR_FILENO, "\n", 1);
return (1);
}
