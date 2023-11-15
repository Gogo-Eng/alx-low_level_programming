#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: returns nothing
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i, start = 0;
	va_list lot;
	char *str;

	va_start(lot, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				switch (start)
				{case 1: printf(", "); }
				printf("%c", va_arg(lot, int));
				start = 1;
				break;
			case 'i':
				switch (start)
				{case 1: printf(", "); }
				printf("%d", va_arg(lot, int));
				start = 1;
				break;
			case 'f':
				switch (start)
				{case 1: printf(", "); }
				printf("%f", va_arg(lot, double));
				start = 1;
				break;
			case 's':
				switch (start)
				{case 1: printf(", "); }
				str = va_arg(lot, char*);
				if (!str)
				str = "(nil)";
				printf("%s", str);
				start = 1;
				break;
		}
		i++;
	}
	va_end(lot);
	printf("\n");
}
