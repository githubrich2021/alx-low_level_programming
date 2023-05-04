#include "main.h"
/**
* get_endianness - Entry point
*
* Return: big for 0, or 1 for small
*/
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
