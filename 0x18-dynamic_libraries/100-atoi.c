#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	 int i;

	 i = 0;
	 while (s[i])
	 {
		 i++;
	 }
	 return(i);
}
