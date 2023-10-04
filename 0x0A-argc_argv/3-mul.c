#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints multiplication of two numbers
 * @argv : string of nums
 * @argc : count of arguments
 * Return: Multiplication
 */

int main(int argc, char *argv[])
{
	(void) argc;
	int mul;

	mul = (atoi(argv[1]) * atoi(argv[2]));

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", mul);
	}

	return (0);
}
