#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character type
 *
 * @charpassed: argument passed
 * Return: Always 0 (Success)
 */

int _putchar(char charpassed)
{
	return (write(1, &charpassed, 1));
}
