#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: print string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - checking string
 * @s: print string
 * @r1: small string
 * @r2: big string
 * Return: nothing
 */
int comparator(char *s, int r1, int r2)
{
	if (*(s + r1) == *(s + r2))
	{
		if (r1 == r2 || r1 == r2 + 1)
		       return (1);
		return (0 + comparator(s, r1 + 1, r2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Entry point
 * @s: input
 * Return: 1 palindrom, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
