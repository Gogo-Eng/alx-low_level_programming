#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free_dlistintfree_dlistint
 * @head: pointer to the first node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
