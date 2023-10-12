#include "main.h"

/**
 * print_sign: prints sign of a argument entered
 *
 * @c: contains the argument that we will be printing it's sign
 *
 * Return: 1 and prints + if n is greater than zero, 0 and prints 0 if n is zero, -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
_putchar('
