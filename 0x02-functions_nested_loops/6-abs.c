#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @n: takes in the signed and unsigned int
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
