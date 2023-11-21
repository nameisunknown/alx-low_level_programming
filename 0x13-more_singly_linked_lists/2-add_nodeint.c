#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint
 *
 * @head: a pointer to a pointer
 * @n: a value of type int passed as arg
 * Return: address of new element add or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointerToNewNode;

	pointerToNewNode = malloc(sizeof(listint_t));
	if (pointerToNewNode != NULL)
	{
		pointerToNewNode->n = n;
		pointerToNewNode->next = NULL;
	}
	else
		return (NULL);

	if (*head != NULL)
		pointerToNewNode->next = *head;
	*head = pointerToNewNode;
	return (pointerToNewNode);
}
