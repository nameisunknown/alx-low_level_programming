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
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('$');
	return (0);
}
