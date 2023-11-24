#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to int
 *
 * @b: const char type
 * Return: the converted num, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	size_t len = strlen(b);
	unsigned int result = 0;
	unsigned int value = 1;

	int *collector = malloc(strlen(b) * sizeof(int));
	if (collector == NULL)
		return (0);

	unsigned int c = strlen(b) - 1;
	size_t counter = 0, count1 = 0;

	if (b == NULL)
		return 0;
	while (c >= 0)
	{
		if ((*(collector + c)) == '0' || (*(collector + c)) == '1')
		{
			*(collector + c) = (int)*(b + c) - '0';
			while (count1 < c)
			{
				value *= 2;
				count1++;
			}
			result = (*(collector + c) * value) + result;
			c--;
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
