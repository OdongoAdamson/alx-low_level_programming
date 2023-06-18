#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints its name
 * Return : Always 0 success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv);
}

