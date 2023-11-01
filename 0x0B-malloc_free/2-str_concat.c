#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first pointer
 * @s2: second pointer
 * Return: newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *total;

	int count1;

	int count2;

	int result;

	int index;

	index = 0;

	count2 = 0;

	count1 = 0;

	if (s1 != NULL && s2 != NULL)
	{
		while (*s1 != '\0')
		{
			count1++;
			s1++;
		}
		while (*s2 != '\0')
		{
			count2++;
			s2++;
		}
		result = count1 + count2;

		total = malloc((result * sizeof(*total)) + 1);

		while (index < result)
		{
			if (index < count1)
			{
				*(total + index) = *(s1 + index);
			}
			if (index >= count1)
				*(total + index) = *(s2 + index);
			index++;
		}
		*total = '\0';

	}
	else
	{
		return ("");
	}
	return (total);
}

