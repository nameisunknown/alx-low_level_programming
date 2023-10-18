#include "main.h"

/**
 * print_last_digit - Prints the last digit
 *
 * @n: takes the argument
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		result = n * (-1);
		result = result % 10;
		_putchar(result + '0');
	}
	else
	{
		result = n % 10;
		_putchar(result + '0');
	}
	return (result);
}
