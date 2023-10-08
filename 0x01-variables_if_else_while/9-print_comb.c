#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints characters with symbol
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	return (0);
}

