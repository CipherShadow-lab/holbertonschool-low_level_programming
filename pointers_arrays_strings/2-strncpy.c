#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Refer to Description
 * @src: source string
 * @dest: destination string
 * @n: number of characters to copy
 * Description: Function copies number of char from src to dest
 * Return: (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
