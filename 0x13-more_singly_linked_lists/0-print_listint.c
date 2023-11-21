#include "lists.h"

/**
 * print_listint - prints all element present
 *
 * @h: a const pointer of type listint_t
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;

	size_t counter = 0;

	while (temp != NULL)
	{
		counter++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (counter);
}

