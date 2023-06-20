#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @c: array of chars
 * @size: specifed char
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *c[size];

	if (size != 0)
	{
		return (c);
	}
	else
	{
		return (NULL);
	}
}
