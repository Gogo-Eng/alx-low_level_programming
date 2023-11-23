#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: The number.
 * @m: The number to flip n to
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, bits = 0;

	while (XOR > 0)
	{
		bits += (XOR & 1);
		XOR >>= 1;
	}
	return (bits);
}
