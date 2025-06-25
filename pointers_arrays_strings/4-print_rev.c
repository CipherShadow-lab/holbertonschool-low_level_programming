#include "main.h"
#include <stdio.h>

/**
 * print_rev - Refer to Description
 * @s: String to be printed
 * Description: Function prints a string in reverse.
 * Return: (0) success
 */

void print_rev(char *s)
{
	char *len = s;

	while (*len)
	{
		len++;
	}
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
