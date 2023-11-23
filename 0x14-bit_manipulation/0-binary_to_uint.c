#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, mult = 1;
	int lenght;

	if (b == NULL)
		return (0);
	for (lenght = 0; b[lenght];)
		lenght++;
	for (lenght -= 1; lenght >= 0; lenght--)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
		number += (b[lenght] - '0') * mult;
		mult *= 2;
	}
	return (number);
}
