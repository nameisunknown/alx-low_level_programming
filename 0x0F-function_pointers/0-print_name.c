#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name
 *
 * @name: pointer to a char
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *val))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
