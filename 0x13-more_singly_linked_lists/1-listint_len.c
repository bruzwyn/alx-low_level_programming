#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements of a list.
 * @h: variable list to print
 * Description: singly linked list node number
 *
 * Return: number of the elements
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)

{
	 num++;
	 h = h->next;
	
}
	return(num);
}
