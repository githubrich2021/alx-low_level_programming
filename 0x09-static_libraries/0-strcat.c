#include "main.h"

/**
 * _strcat - Entring two strings
 * @dest: input value
 * @src: value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int g;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[r] = src[g];
		r++;
		g++;
	}

	dest[r] = '\0';
	return (dest);
}
