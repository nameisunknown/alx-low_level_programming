#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer 
 *
 * @str: a pointer
 * Return: pointer on success or NULL if otherwise
 */

char *_strdup(char *str)
{
	char *strpointer;

	int counter;

	int count;

	counter = 0;

	count = 0;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		str++;
		counter++;
	}

	strpointer = malloc((counter * sizeof(*strpointer)) + 1);

	if (strpointer == NULL)
		return (NULL);

	while (*str != '\0')
	{
		*(strpointer + count) = *(str + count);
		count++;
		str++;
	}
	*strpointer = '\0';
	return (strpointer);
}
