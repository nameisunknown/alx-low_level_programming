#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'z'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
