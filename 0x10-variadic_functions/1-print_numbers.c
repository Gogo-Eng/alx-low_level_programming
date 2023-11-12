#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;

	va_list ptt;

	va_start(ptt, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptt, unsigned int);
		printf("%d", num);


		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(ptt);
	printf("\n");
}
