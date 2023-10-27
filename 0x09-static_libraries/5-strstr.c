#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (i < 5)
	{
		haystack[i] = needle[i];
		i++;
	}
	return(haystack);
}
