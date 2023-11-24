#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: takes in the decimal value to be converted to binary
 * @index: checks for the binary value present at index
 * Return: the binary value present at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return -1;
	mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}
