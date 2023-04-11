#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Entry point
 * @s1: input concatenates
 * @s2: concatenating
 *
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	/*concat s1 and s2*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*cahr conct*/
	i = ci = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';

	return (conct);
}
