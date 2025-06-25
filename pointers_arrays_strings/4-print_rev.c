#include "main.h"
#include <stdio.h>

/**
 * print_rev - Refer to Description
 * @str: String to be printed
 * Description: Function prints a string in reverse followed by a new line.
 * Return: (0) success
 */

void print_rev(char *str)
{
	char *len = str;

	while (*len)
	{
		len++;
	}

	while (len)
	{
		_putchar(*str);
		len--;
	}
	_putchar('\n');
}
