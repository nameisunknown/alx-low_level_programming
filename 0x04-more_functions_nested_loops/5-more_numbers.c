#include "main.h"

/**
 * more_numbers - prints 10 numbers from 0-14
 *
 * @void: takes no argument
 */

void more_numbers(void)
{
	int count = 0;
	int conditionBase = 10;
	int base = 14;

	while (count < conditionBase)
	{
		int count2 = 0;
		while (count2 <= base)
		{
			if (count2 >= 14)
				_putchar((count2/10) + '0');
			_putchar((count2 % 10) + '0');
			count2++;
		}
		count++;
		_putchar('\n');
	}
}
