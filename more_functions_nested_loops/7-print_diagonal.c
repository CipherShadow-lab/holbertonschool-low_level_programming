#include "main.h"
#include <stdio.h>

/**
 * Description: print_diagonal - Function prints a diagonal line in terminal
 * @n: The number of diagonals to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
