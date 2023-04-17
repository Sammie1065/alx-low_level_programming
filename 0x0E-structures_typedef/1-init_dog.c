#include "dog.h"

/**
 * init_dog - initializes a struct. of type dog
 * @d: this is the pointer to struct.
 * @name: pointer to the name of the dog
 * @age: this is the age of the dog
 * @owner: pointer to owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
