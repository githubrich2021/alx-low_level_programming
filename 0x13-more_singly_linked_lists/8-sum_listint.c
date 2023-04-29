#include "lists.h"

/**
* sum_listint - Entry point
* @head: pointing to the sum of list
*
* Return: sum all list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
