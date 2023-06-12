#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: String being printed reverse
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == "\0")
	{
		__putchar(*s);
		s--;
	}
	_putchar('\n');
}

