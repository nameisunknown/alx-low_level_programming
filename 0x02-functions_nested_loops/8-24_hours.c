#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int dayCounter = 0;

	while (dayCounter < 24)
	{
		int secondsCounter = 0;

		while (secondsCounter < 60)
		{
			_putchar((dayCounter / 10) + '0');
			_putchar((dayCounter % 10) + '0');
			_putchar(':');
			_putchar((secondsCounter / 10) + '0');
			_putchar((secondsCounter % 10) + '0');
			secondsCounter++;
			_putchar('\n');
		}
		dayCounter++;
	}
}
