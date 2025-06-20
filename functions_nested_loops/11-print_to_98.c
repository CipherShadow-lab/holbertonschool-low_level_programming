#include "main.h"

/**
  * print_to_98 - refer to Description
  * @n: The number to start printing from
  * Description: Function that prints all natural numbers from n to 98.
  * Return: returns the result of n to 98.
  */

void print_to_98(int n)
{
	int i, num, temp;

	for (i = n; (n <= 98) ? (i <= 98) : (i >= 98); (n <= 98) ? i++ : i--)
	{
		num = i;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		temp = num;

		if (temp >= 100)
		{
			_putchar((temp / 100) + '0');
			_putchar(((temp / 10) % 10) + '0');
			_putchar((temp % 10) + '0');
		}
		else if (temp >= 10)
		{
			_putchar((temp / 10 % 10) + '0');
			_putchar((temp % 10) + '0');
		}
		else
		{
			_putchar(temp + '0');
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
