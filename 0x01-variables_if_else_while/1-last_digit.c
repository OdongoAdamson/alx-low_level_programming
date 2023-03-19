#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	printf("Last digit of %d is %d", n, lastdig);
	if (lastdig > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (lastdig == 0)
	{
	printf(" and is 0\n");
	}
	else if (lastdig < 6 && lastdig != 0)
	{
	printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
