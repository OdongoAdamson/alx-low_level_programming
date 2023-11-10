#include "main.h"

/**
 * print_line - prints a line on the screen
 * @n: number of times to print line
 * Return : Always 0 success
 */

void print_line(int n)
{
	int i = 95;
	int x;

	if (n <= 0 )
		_putchar('\n');

	for (x = 0; x <= n; x++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
