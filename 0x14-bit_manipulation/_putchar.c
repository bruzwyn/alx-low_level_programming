#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: 1 if it succeeds.
 * On error, -1 is returned, and error no is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}