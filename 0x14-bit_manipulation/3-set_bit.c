#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: a pointer holding the values entered
 * @index: the index position to be chnaged
 * Return: 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	val = 1UL << index;

	*n |= val;

	return (1);
}
