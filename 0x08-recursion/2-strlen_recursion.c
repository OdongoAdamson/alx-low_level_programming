#include "main.h"

/**
 * _strlen_recursion - Prints length of string
 * @s : string to be counted
 * Return: Alwaya 0 success
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
	count += 1;
	}
	_strlen_recursion(s);
	return (count);
}
