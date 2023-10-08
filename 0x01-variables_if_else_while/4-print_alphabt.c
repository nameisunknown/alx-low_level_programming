#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Return a -z without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char start = 'a';

	char end = 'z';

	while (start <= end)
	{
		if (start != 'q' && start != 'e')
		{
			putchar(start);
			start++;
		}
	}
	putchar('\n');
	return (0);
}
