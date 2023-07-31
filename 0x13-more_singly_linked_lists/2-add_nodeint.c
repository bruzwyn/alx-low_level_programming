#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: Double pointer to the head of the linked list
 * @n: Integer value to be added to the new node.
 * Description: singly linked list node to add
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);

}
