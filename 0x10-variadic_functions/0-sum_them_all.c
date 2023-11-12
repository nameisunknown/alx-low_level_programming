#include <stdarg.h>

/**
 * sum_them_all - sum all values entered in elipsis
 *
 * @n: unsigned int which is constant
 * @...: elipsis
 * Return: if n == 0, returns 0 else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int loop = 0;

	int sum = 0;

	va_list arr;

	va_start(arr, n);

	if (n == 0)
		return (0);
	while (loop < n)
	{
		int collector;

		collector = va_arg(arr, int);
		sum += collector;
		loop++;
	}
	return (sum);
}
