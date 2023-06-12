#include "main.h"

/**
 * is_prime_number - check if input number is prime
 *
 * @n: number to be checked
 * Return: 1 if input is prime and o if not prime
 */

int is_prime_number(int n)
{
	if ((n % 1 == 0) && (n % n == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
