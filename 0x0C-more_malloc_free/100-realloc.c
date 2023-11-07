#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_realloc - reallocates a memory block using malloc and free
  * @ptr: array length
  * @old_size: size of old memory
  * @new_size: size of new memory
  * Return: pointer to new memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	char *src, *dest;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}
	else if (!ptr)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
		{
			return (NULL);
		}
		return (newPtr);
	}
	else if (new_size == old_size)
		return (ptr);

		src = ptr;
		newPtr = (char *)malloc(sizeof(*src) * new_size);
		if (newPtr == NULL)
		{
			free(ptr);
			return (NULL);
		}

			dest = newPtr;
			for (i = 0; i < old_size && i < new_size; i++)
			{
				dest[i] = src[i];

			}

		free(ptr);
		return (newPtr);
}
