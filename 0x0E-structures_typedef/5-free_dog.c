#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog in mem
 * @d: Dog in memory
 *
 * Return: Always 0 Success
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
