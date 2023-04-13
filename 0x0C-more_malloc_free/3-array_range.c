#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: value in minimum
 * @max: maximum
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ar;
	int j;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		ar[j] = min;

	return (ar);
}
