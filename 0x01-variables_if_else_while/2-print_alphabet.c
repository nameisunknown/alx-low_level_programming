#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing a-z in small letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char start = 'a';

	char end = 'z';

	while (start <= end)
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
