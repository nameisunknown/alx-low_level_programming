#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if ((h->str != NULL) && (h->len != 0))
		{
			count++;

		}
		h = h->next;
	}
	return (count);
}
