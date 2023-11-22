#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: the index of the nodes.
 * Return: Address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int a = 0;

	p = head;
	if (p == NULL)
	{
		return (NULL);
	}
	while (p != NULL)
	{
		if (a == index)
		{
			return (p);
		}
		p = p->next;
		a++;
	}
	return (NULL);
}
