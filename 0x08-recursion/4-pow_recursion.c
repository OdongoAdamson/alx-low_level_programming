#include "main.h"

/**
 * _pow_recursion - returns power of x to y
 * @x : number whose power we getting
 * @y : number to which power we raise
 * Return: -1 if y is lower that 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	return (_pow_recursion(x ** y));
}
