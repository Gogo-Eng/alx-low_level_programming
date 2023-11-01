#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first parameter of the function
 * @s2: the second parameter of the function
 * Return: returns a string of character
 */

char *str_concat(char *s1, char *s2)
{

	int j, b, l, boundary;
	char *strings;

	if (s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; s2[j]; j++)
		;
	for (b = 0; s1[b]; b++)
		;
	strings = (char *)malloc((j + b + 1) * sizeof(char));
	if (strings == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < b; l++)
	{
		strings[l] = s1[l];
	}
	boundary = j;
	for (j = 0; j < boundary; l++, j++)
	{
		strings[l] = s2[j];
	}
	return (strings);
}
