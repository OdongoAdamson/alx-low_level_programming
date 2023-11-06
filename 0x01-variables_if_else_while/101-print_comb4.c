#include <stdio.h>

/**
 * main - Entry point
 * @ i - first digit
 * @ j - second digit
 * @ k - third digit
 * Return: Always 0 (success)
 */

int main(void)
{

	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
	for (j = 48; j <= 57; j++)
	{
	for (k = 48; k <= 57; k++)
	{
	if (i != j && i != k && j != i && j != k)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	putchar(44);
	putchar(32);
	if (j == 56 && k == 57)
	continue;
	}
	}
	}
	}
	return (0);
}
