#include "lists.h"

/**
* add_nodeint_end - Entry point
* @head: pointing to list
* @n: new element
*
* Return: new node or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/*** WHILE***/

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
