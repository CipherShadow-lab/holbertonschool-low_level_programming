#include "main.h"
#include <stdio.h>

/**
 * Description: print_square - Function prints a sqaure
 * @size: The size of the square to  print
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
