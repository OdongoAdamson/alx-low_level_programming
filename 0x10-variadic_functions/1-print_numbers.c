#include "variadic_fucntions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: number of integers passed
 *
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, i);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int);
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
