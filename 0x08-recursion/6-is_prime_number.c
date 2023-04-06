#include "main.h"
#include <stdio.h>

int check_prime(int n, int j);

/**
 * is_prime_number - Prime number is returns
 * @n: checked prime number
 *
 * Return: value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checking prime number
 * @n: input
 * @j: checking time
 *
 * Return: 1 if the input integer or 0.
 */
int check_prime(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);
	return (check_prime(n, j + 1));
}

