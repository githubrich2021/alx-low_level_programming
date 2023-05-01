#include "lists.h"

/**
* delete_nodeint_at_index - Entry point
* @head: listing elelment
* @index: node to delete
*
* Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/**** RETURN (-1) IF FAIL ****/

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
