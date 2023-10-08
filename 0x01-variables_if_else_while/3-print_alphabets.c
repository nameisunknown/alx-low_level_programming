#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a-z && A-Z
 *
 * Return 0: Always 0 (Success)
 */

int main(void)
{
	char sm = 'a';

	char sm2 = 'z';

	char bg = 'A';

	char bg2 = 'Z';

	while (sm <= sm2)
	{
		putchar(sm);
		sm++;
	}
	while (bg <= bg2)
	{
		putchar(bg);
		bg++;
	}
	putchar('\n');
	return (0);
}

