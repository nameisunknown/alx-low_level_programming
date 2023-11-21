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
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}

