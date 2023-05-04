#include "main.h"
#include <unistd.h>

/**
* _putchar - Entry point
* @c: printing characters
*
* Return: Success (1) error -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
