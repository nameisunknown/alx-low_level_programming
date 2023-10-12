#include "main.h"

/**
 * _islower - checks if lowercase
 *
 * Description: checks if lowercase and return 1 else 0
 *
 * Return: 1 or 0 (Success)
 */

int _islower(int c)
{
	int result = 0;

	if (c >= 97 && c <=122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
