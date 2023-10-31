#include "main.h"

/**
 * _abs - this checks the sign of the number
 * @i: this is the parameter to be used
 *
 * Return: this will return the absolute value of the number
 *
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
