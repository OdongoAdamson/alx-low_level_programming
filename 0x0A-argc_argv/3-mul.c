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
	int mul = 0;

	mul = (atoi(argv[1]) * atoi(argv[2]));

	if (argc == 3)
	{
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
