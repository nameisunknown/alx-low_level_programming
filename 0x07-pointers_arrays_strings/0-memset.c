#include "main.h"
#include <stdio.h>

/**
 * _memset - fills mmeory up
 *
 * @s: pointer containing memory to be filled
 * @b: value to be filled in memory area (constant byte)
 * @n: number of bytes to fill b with
 * Return: pointer;
 */

char *_memset(char *s, char b, unsigned int n)
{
	int sizeofmem = sizeof(s);

	unsigned int counter = 0;

	while (*s != '\0')
	{
		if (counter < n)
		{
			*s = b;
		}
		counter++;
		s++;
	}
	return (s);
}	
