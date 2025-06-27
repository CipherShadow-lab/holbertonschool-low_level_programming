#include "main.h"
#include <stdio.h>


/**
 * _atoi - Refer to Description
 * @s: the string to be changed
 * Description: Function converts a string to an integer
 * Return: Converted integer
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * i);
}
