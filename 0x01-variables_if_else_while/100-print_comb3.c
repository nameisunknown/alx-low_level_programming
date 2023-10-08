#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible diufferent combinations of 2 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	int q = 1;

	while (n < 10)
	{
		while (q < 10)
		{
			putchar(n + '0');
			putchar(q + '0');

			if (n != 8 || q != 9)
			{
				putchar(',');
				putchar(' ');
			}
			q++;
		}
		n++;
	}
	return (0);
}	
