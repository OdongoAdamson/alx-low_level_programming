#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - PRINT NUMBERS TO 98
 * @n: number to be printed
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
	printf("%d", n);
	printf(",");
	printf(" ");
	n++;
	}
	printf("\n");
	return (n);
}
