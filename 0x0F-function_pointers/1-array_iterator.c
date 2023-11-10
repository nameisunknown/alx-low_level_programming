#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates between array
 *
 * @array: array containing elements
 * @size: size of array
 * @action; a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
