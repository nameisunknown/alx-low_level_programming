#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int received as argument
 * Return: void *
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(*p) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
