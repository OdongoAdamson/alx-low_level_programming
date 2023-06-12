#include "main.h"

/**
 * _puts_recursion - Prints a string then a newline
 *
 * @s: String to be printed
 *
 * Return:Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}