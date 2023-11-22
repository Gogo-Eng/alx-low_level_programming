#ifndef FRONTMAN
#define FRONTMAN

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct dog - a struct data type
 * @name: pointer to a character
 * @age: a floating point integer
 * @owner: pointer to a character
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
