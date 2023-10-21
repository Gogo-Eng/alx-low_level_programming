#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: firat parameter of the function
 * @n: second parameter of the function
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	while (i < n--)
	{

		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
	}
}
