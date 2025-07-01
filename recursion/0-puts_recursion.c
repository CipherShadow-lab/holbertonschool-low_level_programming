#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: String to print
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
