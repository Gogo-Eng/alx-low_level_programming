#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: returns nothing
 */

void print_all(const char * const format, ...)
{
	char character, *str;
	unsigned int i, number;
	double num;
	va_list lot;

	va_start(lot, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			character = va_arg(lot, int);
			printf("%c, ", character);
			break;

			case 'i':
			number = va_arg(lot, int);
			printf("%d, ", number);
			break;

			case 'f':
			num = va_arg(lot, double);
			printf("%f, ", num);
			break;

			case 's':
			str = va_arg(lot, char*);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		i++;
	}
	va_end(lot);
	printf("\n");
}
