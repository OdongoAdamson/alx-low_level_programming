#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all
 * @n : numbers to be summed
 *
 * Return: Sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (n);
	}
	sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
