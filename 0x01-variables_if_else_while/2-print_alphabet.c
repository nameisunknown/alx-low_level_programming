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
	return (0);
/**
 * int charac;
 *
 * for (charac = 61; charac <= 80; charac++)
 * {
 * char updated = (char) charac;
 * putchar(updated);
 * }
 * putchar("\n");
 * return (0);
 */
}
