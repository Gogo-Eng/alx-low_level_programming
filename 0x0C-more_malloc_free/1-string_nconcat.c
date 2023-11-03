#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int y, j, r, t, v;

	for (y = 0; s1 && s1[y]; y++)

	for (j = 0; s2 && s2[j] && n > 0; j++)
	if (n < j)
	{
		str = (char *)malloc((y + n + 1) * sizeof(char));
	}
	else
	{
		str = (char *)malloc((y + j + 1) * sizeof(char));
	}

	if (str == NULL)
	{
		free(str);
	return (NULL);
	}
	for (r = 0; r < y; r++)
	{
		str[r] = s1[r];
	}
	for (t = 0; n < j && t < n; r++, t++)
	{
		str[r] = s2[t];
	}
	for (v = 0; n >= j && v < (y + n); r++, v++)
	{
		str[r] = s2[v];
	}
	str[r] = '\0';
	return (str);
}

