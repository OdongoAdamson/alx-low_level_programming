#include <stdio.h>

/**
 * main - Entry point
 * @ i - first digit
 * @ j - second digit
 * @ k - third digit
 * return: Always zero success
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
	putchar(i);
	putchar(j);
	putchar(k);
	putchar(44);
	}
	}
	}
	return (0);
}
