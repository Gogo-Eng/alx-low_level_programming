#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - the program prints from 1 to 100, followed by a new line.
 * But for multiples of three prints Fizz and for the multiples of
 * five print Buzz and  FizzBuzz for multiples of both three and five .
 * Return: 0
 */

int main(void)
{
	int j;

	j = 1;
	while (j <= 100)
	{
		if (j % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			 printf("%d", j);
		}
		if (j != 100)
		{
			printf(" ");
		}
		j++;

	}
	 return (0);
}
