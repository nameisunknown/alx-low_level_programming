#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	const listint_t *temp = malloc(sizeof(listint_t));

	if (h != NULL)
		temp = h;
	else
		return (-1);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (counter);
}
