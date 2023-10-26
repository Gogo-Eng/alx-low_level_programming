#include "main.h"
#include <stdio.h>

/**
 * _strchr -  a function that locates a character in a string.
 * @s: first parameter of the function
 * @c: second parameter of the function
 * Return: returns a string of characters
 */

char *_strchr(char *s, char c)
{
	unsigned int y;

	y = 0;
	while (s[y])
	{
		if (s[y] == c)
		{
			return (s + y);
		}
		y++;
	}

	if (s[y] == c)
	{
		return (s + y);
	}
	return (NULL);
}

