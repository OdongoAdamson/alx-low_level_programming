#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array if ints
 * @min : smallest array value
 * @max : largest array value
 * Return: Integer
 */

int *array_range(int min, int max)
{
	int*p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int)) * (max - min) + sizeof(int));

	if (a == NULL)
		return (NULL);
}
