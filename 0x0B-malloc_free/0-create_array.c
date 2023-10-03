#include "main.h"
#include <stdlib.h>

/**
 * create_array - fucntions that creates an array of char
 * @c : characters
 * @size : size of mem allocated
 * Return: NULL if size == 0 else pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	
	s = malloc(sizeof(char) * size)
	
	if (s == NULL)
	{
		return(NULL)
	}
}
