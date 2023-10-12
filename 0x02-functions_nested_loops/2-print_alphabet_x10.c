#include "main.h"

/**
 * print_alphabet_x10 - print a -z in multiples of 10
 *
 * Return: Always None (Success)
 */

void print_alphabet_x10(void)
{
	int num = 10;

	int counter = 0;

	while (counter < num)
	{
		int lettersStart = 97;

		int lettersEnd = 122;

		while (lettersStart <= lettersEnd)
		{
			_putchar(lettersStart);
			lettersStart++;
		}
		_putchar('\n');
		counter++;
	}
}
