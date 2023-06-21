#include "function_pointers.h"
/**
 * int_index - finds ints
 * @array: integers
 * @size: size of array
 * @cmp: compaires ints
 * Return: Always 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
