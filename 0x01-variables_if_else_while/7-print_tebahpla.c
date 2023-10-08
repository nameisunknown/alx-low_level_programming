#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing lowercase aplhabets in reverse
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int start = 'a';

	int end = 'z';

	while (end >= start)
	{
		putchar(end);
		end--;
	}
	putchar('\n');
	return (0);
}
