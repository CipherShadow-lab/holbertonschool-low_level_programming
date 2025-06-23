#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A function that checks if c is a digit.
 * @c: An input character
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
