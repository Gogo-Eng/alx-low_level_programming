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
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}

