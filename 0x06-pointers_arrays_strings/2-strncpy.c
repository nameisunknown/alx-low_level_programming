#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer 1
 * @src: pointer 2
 * @n: length to collect from src
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	char *result = dest;

	while (counter < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	while (counter < n)
	{
		*dest = '\0';
		counter++;
	}
	return (result);
}
