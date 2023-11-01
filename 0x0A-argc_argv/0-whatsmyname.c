#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the counter
 * @argv: the vector
 * Return: return an integer
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
