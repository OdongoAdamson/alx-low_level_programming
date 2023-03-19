#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(i);
	putchar(j);
	}
	}
	putchar('\n');
	return (0);
}
