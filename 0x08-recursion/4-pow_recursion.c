#include "main.h"

/**
 * _pow_recursion - Entry piont
 * @x: print x
 * @y: print y
 *
 * Return: result = power(x, y)
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y ==  0 || x == -1)
		return (1);
	return (y * _pow_recursion(x, y - 1));
}
