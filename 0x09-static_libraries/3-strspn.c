#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	 int i;

	 i = 0;
	 while (i < 5)
	 {
		 s[i] = accept[i];
		 i++;
	 }
	 return(0);
}
