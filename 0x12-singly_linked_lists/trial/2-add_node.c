#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		exit(1);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		exit(1);
	}
	ptr->len = len(str);
	ptr->next = NULL;

	ptr->next = *head;

	*head = ptr;

	return (*head);
}
size_t len(const char *str)
{
	size_t count = 0;

	while (str != NULL && *str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
