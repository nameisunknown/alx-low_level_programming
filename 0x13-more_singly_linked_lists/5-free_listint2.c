#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 *
 * @head: a ponter toa pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while ((*head) != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
