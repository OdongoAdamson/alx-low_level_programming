#include "dog.h"

/**
 * init_dog - Initializes a variable of type strct dog
 * @d: the pointer to dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 * Return: Always 0 Success
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
