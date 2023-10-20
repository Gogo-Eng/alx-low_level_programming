#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: first parameter of the function
 * @src: second parameter of the function
 * @n: third parameter of the function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;
	int w;

	w = 0;
	while (src[w])
	{
		w++;
	}

	q = 0;
	while (q < n)
	{
		dest[q] = src[q];
		q++;
	}
	return (dest);
}
