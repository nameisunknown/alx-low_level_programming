#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 0 - 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 10;

	int i = 0;

	while (i < num)
	{
		printf(i);
		i++;
	}
	printf('\n');
}
