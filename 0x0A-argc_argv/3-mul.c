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
	int i;
	int mul = 1;

	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
	}

	else if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		 printf("%d\n", mul);
	}

	return (0);
}


