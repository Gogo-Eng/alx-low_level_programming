#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - gets length of the string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int e;

	for (e = 0; s[e]; e++)
		;
	return (e);
}

/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int e, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (e = 0; str[e]; e++)
		content[e] = str[e];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
