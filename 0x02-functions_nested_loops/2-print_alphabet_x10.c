#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
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

