#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * Return: Always 0 Success
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
	for (j = '1'; j <= '14'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}
