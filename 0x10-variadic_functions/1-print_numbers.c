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
	const unsigned int n, i;
	const char separator;

	for (i = 0; i <= n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", i);
			printf("%s", separator);
			va_arg(ap, int);
		}
		va_end(ap);
	}
	printf("\n");
}
