#include "main.h"

/**
 * print_most_number - prints the numbers from 0 - 9
 */

void print_most_numbers(void)
{
	int numstart = 0;

	int numend = 9;

	while (numstart <= numend)
	{
		if (numstart != 2 || numstart != 4)
		{
			_putchar(numstart + '0');
		}
		numstart++;
	}
	_putchar('\n');
}
