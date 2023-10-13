#include "main.h"
/**
 * print_most_numbers - prints numbers, from 0 to 9, followed by a new line.
 * Description - the function takes no argument and doesn't print 2 and 4
 * return - doesn't return any value
 */

void print_most_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		if (!(j == '2' || j == '4'))
		_putchar(j);
	}
	_putchar('\n');
}
