#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the pointer parameter passed to the function
 * Return: returns nothings
 */

void print_rev(char *s)
{
	int size;
	int i;

	size = 0;
	while (s[size])
	{
		size++;
	}

	i = size - 1;
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
