#include "lists.h"

/**
 * list_len - returns the number of elements
 *
 * @h: this takes the head to the singly linked list
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		exit(1);

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
