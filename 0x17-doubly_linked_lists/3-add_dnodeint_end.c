#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the pointer to the first node
 * @n: element of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i = 0;
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head == 0)
	{
		newnode->n = n;
		newnode->prev = 0;
		newnode->next = 0;
		*head = newnode;
	}

	else
	{
		tail = *head;
		newnode->next = 0;
		newnode->n = n;

		while (tail->next)
		{
			tail = tail->next;
			i++;
		}

		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	return (newnode);
}
