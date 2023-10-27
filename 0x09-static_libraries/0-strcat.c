#include "main.h"
#include <stdio.h>

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: first parameter passed to the function
 * @src: second parameter passed to the function
 * Return: returns a string of character
*/

char *_strcat(char *dest, char *src)
{
	int y;
	int r;

	r = 0;
	while (dest[r])
	{
		r++;
	}


	y = 0;
	while (src[y])
	{
		dest[r] =  src[y];
		y++;
		r++;

	}
	dest[r] = '\0';
	return (dest);
}

