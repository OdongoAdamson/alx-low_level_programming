#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all the arguments
 * @argc : count of arguments
 * @argv : string of arguments
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
