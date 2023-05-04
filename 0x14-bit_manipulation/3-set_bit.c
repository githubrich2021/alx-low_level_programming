#include "main.h"

/**
* set_bit - Entry point
* @n: changing numbers to print
* @index: set numbers bit to 1
*
* Return: success 1, or -1 to fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
