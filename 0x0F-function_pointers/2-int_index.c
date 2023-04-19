#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: value of array
 * @size: array size
 * @cmp: pointer to function of one of 3 in main
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
