#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* This program will assign a random number
* to the variable n each time it is executed
* Return (0)
*/

int main(void) /*the main function is the Entry point*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
	return (0);
}
