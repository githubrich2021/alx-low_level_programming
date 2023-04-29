#include "lists.h"

/**
* insert_nodeint_at_index - Entry point
* @head: pointing to the node
* @idx: new node is added
* @n: insert a new node
*
* Return: print new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/****INX***/

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		else
			temp = temp->next;
	}

	return (NULL);
}
