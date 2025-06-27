#include "main.h"
#include <stdio.h>


/**
 * puts_half - Refer to Description
 * @str: String to be printed
 * Description: Function prints half of the string.
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int a;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		a = (len - 1) / 2;
		a += 1;
	}
	else
	{
		a = len / 2;
	}

	for (; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
