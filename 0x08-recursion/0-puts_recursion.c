#include "main.h"

/**
 * _puts_recursion - Prints a string then a new line
 * @s : string to output
 * Return: Always 0 success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_putchar(s);
	_puts_recursion(char *s);
	_putchar('\n');
}
