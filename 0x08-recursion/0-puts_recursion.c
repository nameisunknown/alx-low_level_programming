#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
/**while (*s != '\0')
{
	write(1, &s, 1);
	s++;
}*/
