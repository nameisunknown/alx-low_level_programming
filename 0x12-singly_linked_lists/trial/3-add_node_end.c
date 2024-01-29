#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		exit(1);
	}
	ptr->str = strdup(str);
	ptr->len = lengthOf(str);

	if (((ptr->str) == NULL))
		exit(1);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		list_t *newHead = *head;
		while (newHead->next != NULL)
		{
			newHead = newHead->next;
		}
		newHead->next = ptr;
		printf("[%d] %s", ptr->len, ptr->str);
	}
	return (*head);
}

size_t lengthOf(const char *str)
{
	size_t count = 0;

	if (str == NULL)
		exit(1);
	else
	{
		while (*str != '\0')
		{
			count++;
			str++;
		}
	}
	return (count);
}
