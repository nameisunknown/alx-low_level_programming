#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer 1
 * @src: pointer 2
 * @n: n bytes
 * Return: strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	int counter = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (counter < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	return (result);
}
