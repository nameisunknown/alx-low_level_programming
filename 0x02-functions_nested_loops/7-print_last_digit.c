#include "main.h"

/**
 * print_last_digit - Prints the last digit
 *
 * @n: takes the argument
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
	return (n);
}
