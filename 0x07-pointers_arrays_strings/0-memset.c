#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: first parameter of the function
 * @b: second parameter of the function
 * @n: third parameter of the function
 * Return: returns  string of characters
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
