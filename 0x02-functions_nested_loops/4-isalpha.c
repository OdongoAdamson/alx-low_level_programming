#include "mai.h"

/**
 * _isalpha - checks for alphabetic
 * @c: character to be checked
 * Return: 1 if is a letter 0 otherwise
 */

int _isalpha(int c)
{
	for ((c = 65; c <= 90; c++) && (c >= 97; c <= 122; c++))
	{
	return (1);
	}
	return (0);
}
