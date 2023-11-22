#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: pointer to a pointer
 * @n: value to be added ro teh beginning pointer
 * Return: a pointer to the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		listint_t *nodeToHead;

		nodeToHead = *head;

		while (nodeToHead->next != NULL)
		{
			nodeToHead = nodeToHead->next;
		}
		nodeToHead->next = temp;
	}
	return (temp);
}
