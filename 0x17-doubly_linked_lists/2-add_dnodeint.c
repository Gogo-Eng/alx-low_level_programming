#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the pointer to the first node
 * @n: the element of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));


	if (newnode == 0)
	{
		return (NULL);
	}

	if (*head == 0)
	{
		newnode->n = n;
		*head = newnode;
		newnode->prev = 0;
		newnode->next = 0;
	}

	else
	{
		newnode->n = n;
		newnode->prev = 0;
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}



