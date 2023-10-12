#include "main.h"

/**
 * _isalpha - checks if letter, lowercase or uppercase
 *
 * @c: takes the ascii value of char args entered
 *
 * Return: 1 if codition met, and 0 if otherwise
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) ||  (c >= 97 && c <= 122))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
