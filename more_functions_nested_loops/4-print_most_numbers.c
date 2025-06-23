#include "main.h"
#include <stdio.h>

/**
 * Description: print_most_numbers - Function prints from 0 to 9 except 2 & 4.
 * Return: Void
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch != 50 && ch != 52)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
