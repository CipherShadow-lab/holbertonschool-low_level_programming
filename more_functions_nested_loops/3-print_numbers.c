#include "main.h"
#include <stdio.h>

/**
 * Description: print_numbers - Function prints numbers from 0 to 9.
 * Return: 0 success
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
