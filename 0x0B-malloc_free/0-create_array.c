#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *
 * @size: unsigned int
 * @c: character to be printed
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *charPassed;

	charPassed = malloc((sizeof(char) * size)+ 1);


	if (size > 0)
	{
		if (charPassed != NULL)
		{
			unsigned int countThrough;

			countThrough = 0;

			while (countThrough < size)
			{
				*(charPassed + countThrough) = c;
				countThrough++;
			}
			*charPassed = '\0';
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (charPassed);
}
