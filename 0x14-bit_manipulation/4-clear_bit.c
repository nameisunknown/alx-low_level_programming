#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long x = 0;
	unsigned int i;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (bits < index)
	{
		return (-1);
	}
	for (i = 0; i <= index; i++)
	{
		x = 1 << i;
	}

	x = ~x;
	*n = *n & x;
	return (1);
}
