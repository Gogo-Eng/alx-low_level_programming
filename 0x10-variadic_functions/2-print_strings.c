#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list pipe;

	va_start(pipe, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pipe, char*);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("nill");
		}

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(pipe);
	printf("\n");

}
