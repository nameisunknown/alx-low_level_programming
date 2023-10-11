#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char valueToBePrinted[] = "_putchar";

	for (int count = 0; count < 9; count++)
	{
		_putchar(valueToBePrinted[count]);
	}
	_putchar('\n');
	return (0);
}
