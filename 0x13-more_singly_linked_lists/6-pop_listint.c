#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node of the linked list
 *
 * Description: This function frees all nodes of list.
 *
 * Return: NULL after all the nodes have been freed.
 */

int pop_listint(listint_t **head)

{
int n;

listint_t *current;
n = 0;
if (*head != NULL)
{
current = *head;
n = current->n;
*head = (*head)->next;
free(current);
}
return (n);
}

