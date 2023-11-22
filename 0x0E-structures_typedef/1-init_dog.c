#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: 1st parameter of the function
 * @name: 2nd parameter of the function
 * @age: 3rd parameter of the function
 * @owner: 4th parameter of the function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
