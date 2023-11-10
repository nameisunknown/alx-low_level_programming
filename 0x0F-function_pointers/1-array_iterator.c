#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - iterates between array
 *
 * @array: array containing elements
 * @size: size of array
 * @action; a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
