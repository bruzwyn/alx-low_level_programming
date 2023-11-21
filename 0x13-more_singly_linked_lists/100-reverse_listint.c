#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_node = NULL;
listint_t *next_node = NULL;

while (*head)
{
next_node = (*head)->next;
(*head)->next = previous_node;
previous_node = *head;
*head = next_node;
}

*head = previous_node;

return (*head);
}
