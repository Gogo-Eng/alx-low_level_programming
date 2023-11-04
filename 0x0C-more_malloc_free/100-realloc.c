#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 * Return: success
 */
void *_memcpy(void *dest, void *src,  unsigned int n)
{
	unsigned int i;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;


	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (0);
}

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
	char *ptr_cpy;

	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		return (NULL);
		}
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
	{
		return (ptr);

	}
	else
	{
		ptr_cpy = ptr;
		newPtr = (char *)malloc(sizeof(*ptr_cpy) * new_size);
		if (newPtr == NULL)
		{
			free(ptr);
			return (NULL);
		}	
		if (newPtr)
		{
			_memcpy(newPtr, ptr, old_size);
			free(ptr);
		}
		return (newPtr);
	}
	return (0);
}
