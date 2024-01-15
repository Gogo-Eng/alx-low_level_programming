#include "main.h"
#include <stdio.h>

/**
 * _strlen -  a function that returns the length of a string.
 * @s: the pointer parameter passed to the function
 * Return: returns nothings
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;


	return (length);
}
