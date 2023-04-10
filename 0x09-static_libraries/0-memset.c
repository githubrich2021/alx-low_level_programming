#include "main.h"
/**
 * _memset - Entry point
 * @s: address
 * @b: output value
 * @n: numbers
 *
 * Return: changing n value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int r = 0;

	for (; n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
