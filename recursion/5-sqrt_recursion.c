#include <stdio.h>
#include "main.h"

/**
 * _sqrt_calc - Calculates natural square root
 * @n: number to calculate square root
 * @i: iterate number
 * Return: Natural square root
 */

int _sqrt_calc(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_calc(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate from
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_calc(n, 0));
}
