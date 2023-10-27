#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: the parameter of the function
 * Return: returns nothing
 */

void _puts(char *str)
{
	int size = 0;

	while (str[size])
	{
		_putchar(str[size]);
		size++;
	}
		_putchar('\n');
}
