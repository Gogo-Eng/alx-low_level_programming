# include "main.h"
/**
 * _isupper -  a function that checks for uppercase character.
 *@c: is character to be checked
 * Return: Returns 1 if c is uppercase and  Returns 0 otherwise
 */

	int _isupper(int c)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
			return (0);
	}

