#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string toprint
 *
 * Return: void
 */
void print_rev(char *s)

{
int c = 0;
while (s[c] != '\n')
{
c++;
}

for (c -= 1; c >= 0; c--)
{
putchar(s[c]);
}
putchar('\n');
}