#include "main.h"
#include <stdio.h>


/**
 * puts2 - Refer to Description
 * @str: String to be printed
 * Description: Function prints every other character starting with first char.
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count = count + 1;
	}
	_putchar('\n');
}
