#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the string parameter passed to the function
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int size;
	int n;

	size = 0;
	while (str[size])
	{
		size++;
	}

	n = size / 2;
	while (n <= size)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
