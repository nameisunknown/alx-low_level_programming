#include <unistd.h>

/**
 * _putchar - returns a character to the buffer
 *
 * Return: character while considering byte
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
