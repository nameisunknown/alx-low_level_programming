#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints the string entered
 *
 * @s: pointer containing strings
 */

void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
