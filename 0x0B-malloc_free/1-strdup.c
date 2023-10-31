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

	counter = 0;

	while (*str != '\0')
	{
		str++;
		counter++;
	}
	strpointer = malloc((sizeof(char) * counter) + 1);

	if (strpointer == NULL)
		return (NULL);
	while (*str != '\0')
	{
		*strpointer = *str;
		strpointer++;
		str++;
	}
	*strpointer = '\0';
	return (strpointer);
}
