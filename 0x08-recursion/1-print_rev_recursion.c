#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s : String to be printed
 * Return: Always 0 Success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar(--*s);
	}
	_print_rev_recursion(s);
}
