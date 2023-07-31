#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all the elements of a list.
 * @h: variable list to print
 * Description: singly linked list node structure
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)

{
printf("%d\n", h->n);
h = h->next;
count++;
}

return (count);
}
