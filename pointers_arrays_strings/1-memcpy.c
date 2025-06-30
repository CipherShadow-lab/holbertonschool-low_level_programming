#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Refer to Description
 * @dest: desination memory area
 * @src: source memory area
 * @n: bytes filled
 * Description: Function copies memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
