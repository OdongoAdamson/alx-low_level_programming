#include <stdio.h>

/**
 * main - FizzBuzz Test
 * Return: Always 0 Success
 */

int main(void)
{

	int x;

	for (x = 0; x < 101; x++)
	{
	if (x % 15 == 0)
	{
	printf("FizzBuzz");
	printf(" ");
	}
	else if (x % 3 == 0)
	{
	printf("Fizz");
	printf(" ");
	}
	else if (x % 5 == 0)
	{
	printf("Buzz");
	printf(" ");
	}
	else
	{
	printf("%d", x);
	printf(" ");
	}
	}
}
