#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of zeros and ones chars
 *
 * Description: This function returns the converted number, or zero
 *
 * Return: NULL
 */

unsigned int binary_to_uint(const char *b)

{
unsigned int result = 0;
unsigned int n;

if (b == NULL)
return (0);

for (n = 0; b[n] != '\0'; n++)
{

if (b[n] != '0' && b[n] != '1')
return (0);

result = result * 2 + (b[n] - '0');
}

return (result);
}
