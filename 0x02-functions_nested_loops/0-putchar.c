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

	int count = 0;

	while (count < 8)
	{
		_putchar(valueToBePrinted[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
