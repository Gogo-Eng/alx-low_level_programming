#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first parameter
 * @s2: the second parameter
 * Return: returns an intiger value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	while (s1[i] && s2[i])
	{

	if (s1[i] == s2[i])
	{
		r = s1[i] - s2[i];
		return (r);
	}
	if (s1[i] < s2[i] || s1[0] > s2[i])
	{
	r = s1[i] - s2[i];
	return (r);
	}

	i++;
	}

	return (0);
}
