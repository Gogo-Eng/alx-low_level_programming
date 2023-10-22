#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @upper: parameter of the function
 * Return: returns a string of characters
 */

char *string_toupper(char *upper)  
{
	int t;

	t = 0;
	while (upper[t])
	{
		t++;
	
		if (upper[t] >= 'a' && upper[t] <= 'z')
		{
			upper[t] -= 32;
		}
	}

	 return (upper);
}
