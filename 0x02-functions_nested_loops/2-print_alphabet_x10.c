#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always  print_alphabet_x10
 */

	void print_alphabet_x10(void)
	{
		char gogo;
		int progress = 0;

		while (progress <10)
		{
			gogo ='a';
			while (gogo <= 'z')
			{
				_putchar(gogo);
				gogo++;
			}
			_putchar('\n');
			progress++;
		}
	}

