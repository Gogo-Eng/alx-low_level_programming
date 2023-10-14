#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size: is the size of the square
 * Returns: returns nothing
 */

void print_square(int size)
{
	int a;
        int v;

	if (size <= 0)
		_putchar ('\n');
	a = 0;
	while (a < size)
	{
		v = 0;
		while (v < size)
		{
			_putchar ('#');
			v++;
		}
		_putchar ('\n');
		a++;
	}
	_putchar ('\n');
}
