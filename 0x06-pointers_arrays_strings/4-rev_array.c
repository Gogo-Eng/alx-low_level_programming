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
	int u;

	u = n - 1;
	while (u >= 0)
	{
		if (u != (n - 1))
		{
			printf(", ");
		}
		printf("%d", a[u]);

			u--;

	}
	printf("\n");
}

