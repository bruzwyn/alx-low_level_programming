#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 *
 * Return: Always 1 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora korpar, 2015-10-19"));
return (1);
}
