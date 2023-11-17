nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * stringlen - calculates the length of a string
 * @str: pointer to a string
 *
 * Return: returns the length of a string
 */
unsigned int stringlen(const char *str)
{
	unsigned int s = 0;

	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to add to the string field of the structure added
 *
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	end = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = stringlen(str);
	new->next = NULL;
	if (end == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);
}
