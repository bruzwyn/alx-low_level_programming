#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of a list
 * @head: Double pointer to the head of the linked list
 * @n: Integer value to be added to the new node.
 * Description: This function adds a new node with the integer value 'n'
 * at the end of a singly linked list pointed to by 'head'.
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
