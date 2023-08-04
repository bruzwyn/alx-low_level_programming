#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the unsigned long integer to print in binary
 *
 *
 * Return: void
 */

void print_binary(unsigned long int n)

{
unsigned long int result;
int current;

if (n == 0)

{
printf("0");
return;
}

for (result = n, current = 0; (result >>= 1) > 0; current++)
;
for (; current >= 0; current--)
{

if ((n >> current) & 1)
printf("1");
else
printf("0");

}
}
