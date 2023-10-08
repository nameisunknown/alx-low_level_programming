#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 0 - 9 with putchar
 *
 * Rturn: Always 0 (Success)
 */

int main(void)
{
	int pq;

	int num = 10;

	for (pq = 0; pq < num; pq++)
	{
		putchar(pq + '0');
	}
	putchar('\n');
	return (0);
}
