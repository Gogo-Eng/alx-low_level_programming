#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: first parameter of the function
 * @src: second parameter of the function
 * @n: third parameter of the function
 * Return: returns a string of characters
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;
	while (q < n && src[q])
	{
		dest[q] = src[q];
		q++;
	}
	
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}

