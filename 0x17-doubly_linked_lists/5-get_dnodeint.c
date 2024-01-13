#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked lisi
 * @head: pointer to the first node
 * @index: the index of the node, starting from 0
 * Return: returns the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; temp && i < index; i++)
	{
		temp = temp->next;
	}

	if (i > index || head == NULL)
	{
		return (NULL);
	}

	return (temp);
}



