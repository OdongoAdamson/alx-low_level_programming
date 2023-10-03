#include "main.h"

/**
 * create_array - fucntions that creates an array of char
 * @c : characters
 * @size : size of mem allocated
 * Return: NULL if size == 0 else pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *c[];
	
	*c = malloc(sizeof(*c) * size);

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		return (*c);
	}
}
