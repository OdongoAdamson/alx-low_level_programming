#include "function_pointers.h"

/**
 * array_iterator - goes over array elements
 * @array: value being iterrrated
 * @size: size of array
 * @action: pointer to a function to be used
 *
 * Return: Always 0 success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
