#include "main.h"

/**
  * print_to_98 - refer to Description
  * @n: The number to start printing from
  * Description: Function that prints all natural numbers from n to 98.
  * Return: returns the result of n to 98.
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}

	return (0);
}
