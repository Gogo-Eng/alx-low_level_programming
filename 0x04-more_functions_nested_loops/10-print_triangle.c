#include "main.h"
/**
 * print_triangle  - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i;
	int w;

	if (size <= 0)
	{	_putchar ('\n');
	}

	i = 0;
	while (i < size)
	{
		w = 0;
		while (w < size - i - 1)
		{
			_putchar (' ');
			w++;
		}
			w = 0;
			while (w <= i)
			{
				_putchar ('#');
				w++;
			}

		_putchar ('\n');
		i++;
	}
}


