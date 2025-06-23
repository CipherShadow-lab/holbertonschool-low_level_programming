#include "main.h"
#include <stdio.h>

/**
 * Description: print_line - Function prints a straight line in terminal
 * @n: The number of lines to print
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
