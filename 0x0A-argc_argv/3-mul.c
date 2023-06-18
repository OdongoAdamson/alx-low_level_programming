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
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
