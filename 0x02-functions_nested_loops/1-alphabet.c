#include "main.h"

/**
 * print_alphabet - prints a - z
 *
 * Description: prints alphabets in small letters
 *
 * Return: Always None (Success)
 */

void print_alphabet(void)
{
	int start = 97;

	int end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
