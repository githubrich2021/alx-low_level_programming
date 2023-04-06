#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Entry point
 * @n: calculate the square root
 *
 * Return: square root of natural number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry point
 * @n: input
 * @i: input number
 *
 * Return: square root of natural number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n || sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
