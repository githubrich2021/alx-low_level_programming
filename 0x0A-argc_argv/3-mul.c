#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multipling integres
 * @argc: output
 * @argv: arguments
 *
 * Return: 0 if is true, 1 if is false
 */
int main(int argc, char *argv[])
{
	int r, n;
	if (argc == 3)
	{
		r = atoi(argv[1]);
		n = atoi(argv[2]);
			printf("%d\n", r * n);
			return (0);
	}
	printf("Error\n");
	return (1);
}
