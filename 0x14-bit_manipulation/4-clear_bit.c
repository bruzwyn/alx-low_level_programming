#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index to 0
 * @n: pointer to the unsigned long integer
 * @index: the index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
unsigned long int j;
unsigned int result;

if (index > 56)
return (-1);

result = index;

for (j = 1; result > 0; j *= 2, result--)
;

if ((*n >> index) & 1)
*n -= j;

return (1);
}
