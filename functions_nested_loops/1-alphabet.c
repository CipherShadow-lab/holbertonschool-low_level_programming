#include "main.h"

/**
  * main - Print the alphabet in lowercase letters
  *
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
