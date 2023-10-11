#include "function_pointers.h"

/**
 * int_index - searches index
 * @array: elements being checked
 * @size: number of elements
 * @cmp: function being used
 *
 * Return: Always 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array !- NULL && cmp != NULL)
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
