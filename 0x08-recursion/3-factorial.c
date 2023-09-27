#include "main.h"

/**
 * factorial - returns factorial of any num
 * @n : number whose factorial we getting
 * Return: Always 0 Suucess
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
