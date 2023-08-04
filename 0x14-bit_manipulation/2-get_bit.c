#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the unsigned long integer
 *
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the given index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)

{
unsigned long int result;

if (index > 59)

return (-1);

result = n >> index;

return (result & 1);
}
