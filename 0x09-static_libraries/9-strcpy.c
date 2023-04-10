#include "main.h"

/**
 * char *_strcpy - Entry point
 * @dest: copy
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int x = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (; x < j ; x++)
	{
		dest[x] = src[x];
	}
	dest[j] = '\0';
	return (dest);
}
