#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: first parameter passed to the function
 * @n: is the number of elements of the array to be printed
 * Return: returns nothing
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);

		if (t < (n - 1))
		{
			printf(", ");
		}
	}





}
