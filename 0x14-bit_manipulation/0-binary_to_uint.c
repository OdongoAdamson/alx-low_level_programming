#include "main.h"

/**
 * binary_to_uint - converts a binary to an int
 * @b: sting being converted
 *
 * Return: 0 if char or null 1 is okay
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decval;

	decval = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decval <<= 1;
		if (b[i] == '1')
			decval += 1;
	}
	return (decval);
}
