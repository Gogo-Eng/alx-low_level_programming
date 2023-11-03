#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: first parameter of the function
 * @max: second parameter of the function
 * Return: return an integer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int p;
	int range = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(range * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (p = 0; min <= max; min++, p++)
	{
		ptr[p] = min;
	}
	return (ptr);
}

