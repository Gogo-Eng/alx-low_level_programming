#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int q;
	int w;

	if (n <= 0)
		_putchar ('\n');

	q = 0;
	while (q < n && n > 0)
	{
		w = 0;
		while (w < q)
		{
			_putchar (' ');
			w++;
		}
		_putchar ('\\');
		_putchar ('\n');
		q++;
	}
	_putchar ('\n');
}

