#include "main.h"
#include <stdio.h>

/**
 * _strlen - Refer to Description
 * @s: String Length
 * Description: Function that returns the length of a string.
 * Return: (0) string length integer
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
