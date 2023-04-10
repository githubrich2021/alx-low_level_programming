#include <unistd.h>

/**
 * _putchar - writes the c to stdout
 * @c: print character
 *
 * Return: 1.
 * On error, -1 is retured, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
