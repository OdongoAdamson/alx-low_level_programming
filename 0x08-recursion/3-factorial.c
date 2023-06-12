#include "main.h"

/**
 * factorial: returns factorial of a given number
 *
 * @n: number whose factorial is to be calculated
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	factorial(0) = 1;
	return n * factorial(n-1);
}
