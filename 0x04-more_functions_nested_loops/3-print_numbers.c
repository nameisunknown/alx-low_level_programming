#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 0
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int numstart = 0;

	int numend = 9;

	while ( numstart <= numend)
	{
		_putchar(numstart + '0');
		numstart++;
	}
	_putchar('\n');
}
