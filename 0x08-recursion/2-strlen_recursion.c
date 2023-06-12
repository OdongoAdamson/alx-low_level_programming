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
	if (s == "")
	{
		return (0);
	}
	else if (s != "\0")
	{
		return (1 + (s +1);
	}
