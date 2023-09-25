#include "main.h"

/**
 * _isdigit - Checks if input is a digit
 * @y: the number to be checked
 * Return: 1 i input is a digit 0 if not
 */

int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
