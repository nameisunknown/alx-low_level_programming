#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		if ((h->str != NULL) && (h->len != 0))
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (count);
}
