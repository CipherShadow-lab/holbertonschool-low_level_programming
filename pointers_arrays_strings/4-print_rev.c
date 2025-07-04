#include "main.h"
#include <stdio.h>

/**
 * print_rev - Refer to Description
 * @s: String to be printed
 * Description: Function prints a string in reverse.
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
