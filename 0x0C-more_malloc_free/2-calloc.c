#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: first parameter of the function
 * @size: second parameter of the function
 * Return: returns  nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int t;
	char *ptr;

	if (nmemb <= 0)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (t = 0; t < (size * nmemb); t++)
	{
		ptr[t] = 0;
	}
	return (ptr);
}

