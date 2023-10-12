#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings
 * @separator: separates strings
 * Return : strings literals
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strngs;
char *s;
unsigned int i;

va_start(strngs, n);

for (i = 0; i < n; i++)
{
s = va_arg(strngs, char *);

if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strngs);
}
