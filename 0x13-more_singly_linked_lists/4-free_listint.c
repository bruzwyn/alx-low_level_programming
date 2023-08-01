#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to the first node of the linked list
 *
 * Description: This function freees all the nodes of a linked list.
 *
 * Return: NULL after all the nodes have been freed.
 */

void free_listint(listint_t *head)

{
listint_t *current;

while (head)
{
current = head;
head = head->next;

free(current);
}
}
