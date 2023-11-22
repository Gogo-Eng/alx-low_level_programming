#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *set;
	int n;

	tmp = *head;
	if (tmp == NULL)
	{
		return (0);
	}
	set = *head;
	tmp = tmp->next;
	*head = tmp;
	n = set->n;
	free(set);
	return (n);
}
