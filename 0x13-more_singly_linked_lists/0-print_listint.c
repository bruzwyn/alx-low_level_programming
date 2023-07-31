#include "lists.h"

/**
 * @main - prints all the elements of a listint_t list.
 * @n: variable list to print
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)

{
printf("%d\n" , h->n);
h = h->next;
count++;
}

return (count);
}
