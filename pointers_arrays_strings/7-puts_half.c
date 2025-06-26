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
	int count = 0;
	int i;


	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
			count++;
		}
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	for (i++; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
