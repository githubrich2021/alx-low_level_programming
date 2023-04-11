#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: array size
 * @c: assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int j;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	/*assign*/
	for (j = 0; j < size; j++)
	str[j] = c;

	return (str);
}
