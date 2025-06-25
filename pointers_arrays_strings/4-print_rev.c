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
	int len = 0, index;

	while (str[index++])
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
