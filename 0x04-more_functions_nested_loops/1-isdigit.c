#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: takes argument of type int
 * Return: 1 if c is a digit, and 0 is otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
