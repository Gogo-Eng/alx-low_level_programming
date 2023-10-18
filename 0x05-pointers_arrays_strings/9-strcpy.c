#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -  function that copies strings
 * @dest: first parameter passed to the function
 * @src: second parameter passed to the function
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int r;
	int y;
	int w;

	y = 0;
	for (r = 0; src[r]; r++)
	{
		y++;
	}


	for (w = 0; w < r; w++)
	{
		dest[w] = src[w];
	}

		dest[r] = '\0';
		return (dest);
}
