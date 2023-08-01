#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Gets node at a given index in a linked list.
 * @head: pointer to the first node of the linked list
 * @index:  index of the node to return
 *
 * Description: This function returns the nth node of a listint_t linked list
 *
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
listint_t *current = head;
unsigned int current_index = 0;

while (current != NULL)
{
if (current_index == index)
return (current);

current_index++;
current = current->next;
}

return (NULL);
}
