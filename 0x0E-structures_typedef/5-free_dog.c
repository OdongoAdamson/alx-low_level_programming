#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog in mem
 *
 * Return: Always 0 Success
 */

void free_dog(dog_t *d)
{
	free(d);
}
