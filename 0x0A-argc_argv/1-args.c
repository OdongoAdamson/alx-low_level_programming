#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc : number of arguments
 * @argv : string of arguments
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
