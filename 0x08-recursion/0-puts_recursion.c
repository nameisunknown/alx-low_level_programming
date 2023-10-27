#include <stdio.h>

void _puts_recursion(char *s)
{
	putchar(*s);
	*s++;
	if (*s != '\0')
	{
		_puts_recursion(s++);
	}
	putchar('\0');
}
	
	
/**while (*s != '\0')
{
	write(1, &s, 1);
	s++;
}*/

int main (void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
