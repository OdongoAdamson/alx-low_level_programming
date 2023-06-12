#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: string to be checked
 *
 * Return: lentgth of string
 */
int _strlen(char *s)
{
	if (s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
