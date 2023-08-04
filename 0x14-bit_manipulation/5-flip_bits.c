#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get
 * from one number to another.
 * 
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned int long calc = n ^ m;
unsigned int long count = 0;

while (calc)

{
count++;
calc &= (calc -1);
}

return (count);
}
