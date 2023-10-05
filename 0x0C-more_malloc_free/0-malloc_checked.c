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
	int *b;

	if (b > 0)
	{
	b = malloc(sizeof(b));
	}
	else
	{
		exit(98);
	}
	return (b);
}
