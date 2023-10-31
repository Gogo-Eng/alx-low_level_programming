#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @size: first parameter of the function
 * @c: second parameter of the function
 * Return: returns a string of character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}

