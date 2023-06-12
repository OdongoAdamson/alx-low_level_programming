#include "main.h"
/*
 * main - fucntion that prints a string
 *
 * @s: string to be printed
 * Return: Always 0
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
