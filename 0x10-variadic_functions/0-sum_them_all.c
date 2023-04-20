#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: passing paramters to the function
 * @...: calculate the sum
 *
 * Return: n == 0 - 0 else sum all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);
	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
