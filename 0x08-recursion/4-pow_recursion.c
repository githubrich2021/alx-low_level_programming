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
	if (x ==  0 || y == -1)
		return (1);
	return (x * _pow_recursion(y, x - 1));
}
