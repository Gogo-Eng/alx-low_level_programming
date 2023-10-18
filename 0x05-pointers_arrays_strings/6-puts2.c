#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the pointer parameter passed to the function
 * Return: returns nothing
 */

void puts2(char *str)
{
	int size;

	size = 0;
	while (str[size])
	{

	if (size % 2 == 0)
	{
		_putchar(str[size]);
	}
	size++;

	}
	 _putchar('\n');
}
