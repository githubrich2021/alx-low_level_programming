#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: input elements
 * @size: size of bytes
 *
 * Return: pointer or nmemb of size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	/*nmemb of size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
