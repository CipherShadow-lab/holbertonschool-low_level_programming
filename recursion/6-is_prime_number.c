#include <stdio.h>
#include "main.h"

/**
 * prime_check - Checks if number is a prime number
 * @n: number to be checked
 * @i: iteration
 * Return: 1 for prime or 0 for composite
 */

int prime_check(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the integer is a prime number
 * @n: number to calculate from
 * Return: 1 if prime number
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
