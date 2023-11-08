#include "dog.h"

/**
 *init_dog - initializes a location in memory
 *@d: memory location to initialize
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: point to "d"
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
