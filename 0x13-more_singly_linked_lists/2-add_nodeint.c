#include "lists.h"

/**
* add_nodeint - Entry point
* @head: pointing to the first node
* @n: insert node
*
* Return: pointer and make it as NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/*** NEW LINE ***/

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}



