#include <stdio.h>

/**
 * Swap_int -swaps the values of two intergers.
 *
 * @a: The first interger to be swapped.
 * @b: The second interger to be swapped.
 * return: nothing
 */
void swap_int(int *a, int *b)
/* The function that swaps the values of two intergers. */
{
int temp = *a;
*a = *b;
*b = temp;
}
