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
	unsigned int value = 1;
	size_t c = len;
	size_t count1 = 0;

	int *collector = malloc(len * sizeof(int));
	if (collector == NULL)
		return (0);

	while (c-- > 0)
	{
		size_t tempC;
		if (b[c] == '0' || b[c] == '1')
		{
			collector[c] = b[c] - '0';
			count1 = 0;
			tempC = c;
			while (count1 < tempC)
			{
				value *= 2;
				count1++;
			}
			result = collector[c] * value + result;
			value = 1;
		}
		else
		{
			free(collector);
			return (0);
		}
	}
	free(collector);
	return (result);
}	
