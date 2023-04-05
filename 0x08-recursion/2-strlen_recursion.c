#include "main.h"

/**
 * _strlen_recursion - Entry poing
 * @s: printing input of length of a string.
 *
 * Return: value of an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	/**
	 * value of an integer
	 *
	 */
	s++;
	return (_strlen_recursion(s) + 1);
}
