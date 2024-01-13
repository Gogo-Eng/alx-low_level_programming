#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that sum of all the data (n) of a linked list
 * @head: pointer to the first node of the list
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t temp;
	int sum = 0;

	temp = head;
	while (temp)
	{


