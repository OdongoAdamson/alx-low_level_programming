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
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
