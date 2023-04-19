#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: array
 * @size: size to print
 * @action: hex pointer
 * Retrun: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;
	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
