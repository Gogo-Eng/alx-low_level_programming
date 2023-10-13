#include "main.h"

/**
 * more_numbers - prints from 0 to 14, 10 times , followed by a new line.
 * Description - the function takes no argument
 * return - doesn't return any value
 */

void more_numbers(void)
{
	char d;
	char e;
	int c = 0;

	while (c < 10)
	{

		for (d = 0; d <= 14; d++)
		{
			e = d;
			if (d > 9)
			{
				_putchar ('1');
				e = d % 10;
			}
			_putchar ('0' + e);
		}
		_putchar ('\n');
		c++;
	}
}
