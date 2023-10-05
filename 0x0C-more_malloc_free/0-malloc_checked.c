#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b : points to mem location
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
