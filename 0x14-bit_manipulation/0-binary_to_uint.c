#include "main.h"

/**
 * binary_to_uint - converts a binary to an int
 * @b: sting being converted
 *
 * Return: 0 if char or null 1 is okay
 */

unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int total = 0;
	int decval = 1;

	for (int i = (slen - 1); i >= 0; i--)
	{
		if ((b[i] != '0' && b[i] != '1') | b[i] == NULL)
			return (0);
		if (b[i] == '1')
			total += decval;
		decval *= 2;
	}


	return (total);
}
