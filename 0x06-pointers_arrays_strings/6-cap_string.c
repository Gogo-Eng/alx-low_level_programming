#include "main.h"
#include <stdio.h>

/**
 * cap_string -  a function that capitalizes all words of a string.
 * @upper: the parameter of the function
 * Return: returns a string of character
 */

char *cap_string(char *upper)
{
	int y;
	int capital = 1;

	y = 0;
	while (upper[y])
	{
		char current = upper[y];

		if ((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z'))
		{
			if (capital)
			{
				if (current >= 'a' && current <= 'z')
				{
					upper[y] = current - ('a' - 'A');
				}

				capital = 0;
			}
			else if (current >= 'A' && current <= 'Z')
			{
				upper[y] = current - ('A' - 'a');

			}

		}


		else
		{
			capital = 1;
		}

		y++;
	}

	return (upper);

}

