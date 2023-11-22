#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, and set the head to NULL.
 * @head: pointer with the first node
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *set;

	if (head == NULL)
	{
		return;
	}
	set = *head;
	while (set != NULL)
	{
		tmp = set;
		set = set->next;
		free(tmp);
	}
	*head = NULL;
}
