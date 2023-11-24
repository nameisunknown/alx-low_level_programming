#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

/**
 * binary_to_uint - converts binary to int
 *
 * @b: const char type
 * Return: the converted num, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	size_t len = strlen(b);
	unsigned int result = 0;
	size_t c = 0;

	int *collector = malloc(len * sizeof(int));
	if (collector == NULL)
		return 0;

	while (c < len)
	{
		if (b[c] == '0' || b[c] == '1')
		{
			collector[c] = b[c] - '0';
		}
		else
		{
			free(collector);
			return 0;
		}
		c++;
	}
	c = 0;
	while (c < len)
	{
		result = (result << 1) | collector[c];
		c++;
	}

	free(collector);
	return result;
}
