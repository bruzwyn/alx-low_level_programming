#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the unsigned long integer
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)

{
unsigned long int j;

if (index > 56)
return (-1);

for (j = 1; index > 0; index--, j *= 2)
;

*n += j;

return (1);
}
