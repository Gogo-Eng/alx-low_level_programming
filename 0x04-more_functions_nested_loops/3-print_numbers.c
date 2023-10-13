#include "main.h"
/**
 * print_numbers - prints numbers, from 0 to 9, followed by a new line
 * Description - the function takes no argument
 * return - doesn't return any value
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
