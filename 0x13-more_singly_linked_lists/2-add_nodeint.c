#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a list
 * @n: variable list to print
 * Description: singly linked list node to add
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *new;

new = malloc(sizeof(listint_t));
return (NULL);
if (!new)

new->n = n;
new->next = *head;
*head = new;

return (new);

}
