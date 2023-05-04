#include "main.h"
/**
* clear_bit - Entry point
* @n: printint numbers to change
* @index: bit to clear
*
* Return: success 1, or -1 fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
