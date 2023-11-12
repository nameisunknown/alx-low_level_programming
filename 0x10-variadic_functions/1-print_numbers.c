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
	unsigned int loop = 0;

	va_list arr;

	va_start(arr, n);

	if (seperator == NULL)
		exit(1);
	if (n == 0)
		exit(1);
	while (loop < n)
	{
		int v = va_arg(arr, int);

		printf("%d", v);
		if (loop < (n - 1) && seperator != NULL)
			printf("%s", seperator);
		loop++;
	}
	putchar('\n');
	va_end(arr);
}
