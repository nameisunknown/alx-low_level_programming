#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: pointer 1
 * @src: pointer 2
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (result);
}
