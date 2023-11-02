#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first parameter of the function
 * @s2: the second parameter of the function
 * @n: third parameter of the function
 * Return: returns a string of characters
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int y, j, r, t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (y = 0; s1[y]; y++)

	for (j = 0; s2[j]; j++)


	str = (char *)malloc((y + j + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
	return (NULL);
	}

	for (r = 0; r < y; r++)
	{
		str[r] = s1[r];
	}

	for (t = 0; t <= n; r++, t++)
	{
		str[r] = s2[t];
	}
	return (str);

}

