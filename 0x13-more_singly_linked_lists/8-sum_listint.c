#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer with the first node
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	unsigned int i = 0;


	ptr = head;
	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		i = i + (ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
