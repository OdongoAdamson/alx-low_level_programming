#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: function to name
 * @name: name of person
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
