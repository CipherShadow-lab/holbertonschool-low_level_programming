#include "main.h"
#include <stdio.h>

/**
 * _memset - Refer to description
 * @s: memory area to fill
 * @b: constant byte
 * @n: bytes filled
 * Description: Function fills memory with a constant byte
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
