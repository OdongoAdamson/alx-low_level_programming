#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * Returns: Almost all but 2 and 4
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
	_putchar(i);
	if (i == 50 && i == 53)
		continue;
	}
	_putchar('\n');
