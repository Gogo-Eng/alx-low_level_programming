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
	int r;

	if (size <= 0)
		_putchar ('\n');
	i = 0;
	while (i < size)
	{
		w = 0;
		while (w < size - i)
		{
			_putchar (' ');
			w++;
		}
			r = 0;
			while (r <= i)
			{
				_putchar ('#');
				r++;
			}

		_putchar ('\n');
		i++;
	}
}

