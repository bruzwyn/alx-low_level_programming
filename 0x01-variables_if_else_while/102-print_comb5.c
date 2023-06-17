#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point.
 *
 * Return: 0 on success
 */
int main(void)
{
int q, p;
for (p = '0'; p <= 99; p++)
{
for (q = p + 1; q <= 99; q++)
{
putchar((p / 10) + '0');
putchar((p % 10) + '0');
putchar(' ');
putchar((q / 10) + '0');
putchar((q % 10) + '0');
if (p == 99 && q == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
