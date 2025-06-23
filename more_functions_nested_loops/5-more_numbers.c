#include "main.h"
#include <stdio.h>

/**
 * Description: more_numbers - Function prints 0 - 14 ten times.
 * Return: Void
 */

void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i % 10 + '0');
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
		}
		_putchar('\n');
	}
}
