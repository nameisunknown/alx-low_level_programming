#include "lists.h"

/**
 * free_listint - frees a listint_t
 *
 * @head: a pointer to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempPtr;

	while (head != NULL)
	{
		tempPtr = head;
		head = head->next;
	}
	free(tempPtr);
}
