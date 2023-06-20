#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initializes dog
 * struct dog - structure that initializs dog
 * @name: name of dog
 * @d: pointer to dog
 * @age: age of dog
 * @owner: who owns dog
 * Return: Always 0 success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
