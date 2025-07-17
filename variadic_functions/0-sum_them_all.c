#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters
 * @n: number of parameters passed to the function
 * @...: a variable number of parameters to calc the sum
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(list, const unsigned int);
		}
	}
	va_end(list);
	return (sum);
}
