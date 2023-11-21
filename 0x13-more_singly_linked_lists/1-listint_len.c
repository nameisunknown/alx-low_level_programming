#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: a pointer to a listint, usually the head into the linkedL
 * Return: number of elements present in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t numberOfElementsPresent = 0;

	if (h == NULL)
	{
		printf("pointer is empty");
		return (-1);
	}
	while (h != NULL)
	{
		numberOfElementsPresent++;
		h = h->next;
	}
	return (numberOfElementsPresent);
}
