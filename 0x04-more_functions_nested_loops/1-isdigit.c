#include "main.h"

/**
 * _isdigit - a function that that checks for a digit (0 through 9).
 * Description - c is the digit to be checked
 * return - Returns 1 if c is a digit and Returns 0 otherwise
 **/

	int _isdigit(int c)
	{
		if(c >= 48 && c <= 57)
		{
			return (1);
		}
		return(0);
	}


