#include "main.h"
#include <stdio.h>
char *_strpbrk(char *s, char *accept)
{
	
	int i;

	i = 0;
	while (i < 5)
	{
		s[i] = accept[i];
		i++;
	}
	return(s);
}
