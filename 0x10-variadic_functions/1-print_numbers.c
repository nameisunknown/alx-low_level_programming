#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 *
 * @seperator: a pointer
 * @n: number of elipsis to be entered
 * @...: a list of arg to be passed
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int loop = 0, count = 0;

	va_list arr;

	va_start(arr, n);

	if (seperator == NULL)
		exit(1);
	if (n == 0)
		exit(1);
	while (*seperator != '\0')
	{
		count++;
		seperator++;
	}
	while (loop < n)
	{
		int v = va_arg(arr, int);

		unsigned int count2 = 0;

		printf("%d", v);

		while(count2 < count)
		{
			printf("%c", *seperator);
			count2++;
		}
		loop++;
	}
	putchar('\n');
	va_end(arr);
}
