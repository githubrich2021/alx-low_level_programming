#include <stdio.h>

void frist(void)__attribute__((constructor));

/**
* first - Entry point
* executing function
*/

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
