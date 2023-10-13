#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the parameter passed to the function
 * Return: returns nothing
 */

	void print_line(int n)
	{
		int i = 0;

		while (i < n && n > 0)
		{
			_putchar ('_');
			i++;
	}
		_putchar ('\n');
	}
