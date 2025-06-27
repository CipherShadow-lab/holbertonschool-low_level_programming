#include "main.h"
#include <stdio.h>

/**
 * _strncat - Refer to Description
 * @dest: desination string
 * @src: source string
 * @n: number of bytes from src to copy
 * Description: Function cocatenates two strings.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int num;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		*ptr++ = src[num];
	}
	*ptr = '\0';
	return (dest);
}
