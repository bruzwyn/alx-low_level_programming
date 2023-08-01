#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the first node of the linked list
 * @idx: index of the node where the new node should be inserted
 *
 * @n: value to be assigned to the new node
 * Description: This function returns address of the new node.
 *
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
listint_t *current = *head;
unsigned int current_index = 0;


if (n == 0)
{
current = malloc(sizeof(listint_t));
if (current == NULL)
return (NULL);

current->n = n;
current->next = NULL;


if (idx == 0)
{
current->next = *head;
*head = current;

return (current);
}

for (current_index = 0; current && current_index < idx; current_index++)
{
if (current_index == idx - 1)
{
current->next = current->next;
current->next = current;
return (current);
}
else
current = current->next;
}
return (current);
}
return (NULL);
}
