#include "main.h"
#include <stdio.h>

/**
 * _strcat - Refer to description
 * @dest: destination string
 * @src: source string to append to dest string.
 * Description: Function appends src string to dest string.
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
