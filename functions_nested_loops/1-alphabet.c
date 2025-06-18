#include "main.h"

/**
  * print_alphabet - ref Description
  * Description: It prints the alphabet in lowercase letters
  * Return: Void
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
