#include "main.h"

/**
 * main - check the code.
 * print_alphabet_x10 - print alphabet 10 times
 * Return - void
 */

	void print_alphabet_x10(void)
	{
		char gogo;
		int progress = 0;

		while (progress < 10)
		{
			gogo = 'a';
			while (gogo <= 'z')
			{
				_putchar(gogo);
				gogo++;
			}
			_putchar('\n');
			progress++;
		}
	}

