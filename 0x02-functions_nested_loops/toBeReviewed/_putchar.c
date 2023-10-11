#include "main.h"

/**
 * _putchar - function that prints
 *
 * Description: prints result
 *
 * Return: Always 0 (Success)
 */
int lenOfParam(char[] paramAdded);

int _putchar(char* valueAdded)
{
	int sizeOfArgPassed = lenOfParam(valueAdded);

	for (int count = 0; count < sizeOfArgPassed; count++)
	{
		putchar(valueAdded[count]);
	}
	return (0);
}

int lenOfParam(char[] paramAdded)
{
	int counter = 0;

	while (paramAdded[counter] == '\n')
	{
		counter++;
	}
	return counter + 1;
}
