#include "main.h"

/**
 * _strlen_recursion - returns the length of string passed
 *
 * @s: pointer to string passed in as parameter
 * Return: length of the string passed or 0 if not
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1)+1);
	}
	return (0);
}
