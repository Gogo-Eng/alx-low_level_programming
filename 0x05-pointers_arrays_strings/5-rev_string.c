#include "main.h"
#include <stdio.h>

/**
 * rev_string -  a function that reverses a string.
 * @s: the pointer parameter passed to the function
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int size;
	int j;

	size = 0;
	while (s[size])
	{

		size++;
	}
	s[size] = '\0';

	j = size - 1;
	
	while (j >= 0)
	{
		printf("%c", s[j]);
		j--;

	}
	
	printf("\n");
}
