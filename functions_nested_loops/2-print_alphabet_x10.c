#include "main.h"

/**
  * print_alphabet_x10 - refer to Description
  * Description: Prints the alphabet in lowercase letters x10
  * Return: Void
  */

void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
