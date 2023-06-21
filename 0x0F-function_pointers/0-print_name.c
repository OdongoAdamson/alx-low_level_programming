#include "function_pointer.h"
/**
 * print_name - prints name
 * @name: name to be printed
 * @f:  function pointer
 * Return: Name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
