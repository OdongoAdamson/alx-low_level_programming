#include "function_pointer.h"
/**
 * array_iterator - checks array
 * @array: value being checked
 * @size: size of the array
 * @action: pointer to function
 * Return: Always o success
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
