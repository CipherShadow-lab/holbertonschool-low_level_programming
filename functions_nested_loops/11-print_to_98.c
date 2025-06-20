#include "main.h"

/**
  * print_to_98 - refer to Description
  * @n: The number to start printing from
  * Description: Function that prints all natural numbers from n to 98.
  * Return: returns the result of n to 98.
  */

void print_to_98(int n)
{
	int i;

	for (i = n; (n <= 98) ? i <= 98 : i >= 98; (n <= 98) ? i++ : i--)
	{
		int num = i;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		if (num >= 100)
		{
			_putchar((num / 100) + '0');
		}
		if (num >= 10)
		{
			_putchar((num / 10 % 10) + '0');
			_putchar((num % 10) + '0');
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
