#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: allocates
 *
 * Return: if malloc fails, and status is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;
	/*alocates*/

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (0);
}
