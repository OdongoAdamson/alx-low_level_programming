#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter, i, j;

	i = 'e';
	j = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != i && letter != j)
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
