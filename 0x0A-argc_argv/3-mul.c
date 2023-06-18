#include "main.h"
#include <stdio.h>

/**
 * main - prints result of multiplication
 * @argc: conter check
 * @argv: numbers check
 * Return: 1 if error occues
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 2)
	{
		printf("Error\n")
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
