#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space.
 * @str: the parameter of the function
 * Return: returns a sting of characters
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *strings;

	if (str == NULL)
	{
		return (NULL);
	}


	i = 0;
	while (str[i])
	{
		i++;

	}
	strings = (char *)malloc((i + 1) * sizeof(char));

	if (strings == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strings[j] = str[j];
	}

	return (strings);
}


