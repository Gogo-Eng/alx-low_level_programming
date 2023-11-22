#include "lists.h"

/**
 * add_nodeint -   adds a new node at the beginning of a listint_t list.
 * @head: pointer to the address of the node
 * @n: second parameter
 * Return: Pointer with the adress of the fdirst node, the node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
