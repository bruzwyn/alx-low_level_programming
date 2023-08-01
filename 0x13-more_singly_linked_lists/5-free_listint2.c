#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: pointer to the first node of the linked list
 *
 * Description: This function frees all nodes of list,sets the head to NULL.
 *
 * Return: NULL after all the nodes have been freed.
 */

void free_listint2(listint_t **head)

{
listint_t *current;

if (head == NULL)
{
return;
}

while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
