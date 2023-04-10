#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: stored
 * @src: copied
 * @n: bytes
 *
 * Return: copied with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
