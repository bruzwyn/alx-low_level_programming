#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list.
 * @head: pointer to the first node of the linked list
 *
 * Description: This function returns the sum of all the data
 *
 * Return: NULL
 */

int sum_listint(listint_t *head)

{
listint_t *current = head;

int sum = 0;

while (current != NULL)

{
sum = sum + current->n;
current = current->next;
}
return (sum);
}
