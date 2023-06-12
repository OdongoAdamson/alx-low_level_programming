#include "main.h"

/**
 * _pow_recursion - returns value of x raised to y
 *
 * @x: number whose power is returned
 *
 * @y: number used as the power
 *
 * Return: Value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;
	}
	return x ** y;
}
