#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - adds two integers
 * op_sub - subtracts b from a
 * op_mul - multiplies a and b
 * op_div - divides a by b
 * op_mod - returns remaider division of a by b
 * @a: first number
 * @b: second number
 * Return: a + b success
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

