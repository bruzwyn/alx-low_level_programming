#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to the first element in the list
 *
 * @index: index of node to be deleted
 *
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *current_index = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (n < index - 1)
	{
		if (!current || !(current->next))
			return (-1);
		current = current->next;
		n++;
	}


current_index = current->next;
current->next = current_index->next;
free(current_index);

	return (1);
}
