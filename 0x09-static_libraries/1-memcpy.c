#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  a function that copies memory area.
 * @dest: first parameter of the function
 * @src: second parameter of the function
 * @n: third parameter of the function
 * Return: returns a string of characters
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	q = 0;
	while (q < n)
	{
		dest[q] = src[q];
		q++;
	}
	return (dest);
}
