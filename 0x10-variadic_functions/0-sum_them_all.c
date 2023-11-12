#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of variables
 * Return: returns the sum of integer numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list gogo;

	va_start(gogo, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(gogo, unsigned int);
	}

	va_end(gogo);

	return (sum);
}
