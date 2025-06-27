#include "main.h"
#include <stdio.h>


/**
 * *_strcpy - Refer to Description
 * @src: source to copy from
 * @dest: destination buffer to copy to
 * Description: Function copies a string from src to dest including null byte.
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int strindex = 0;

	while (strindex >= 0)
	{
		*(dest + strindex) = *(src + strindex);
		if (*(src + strindex) == '\0')
		break;
		strindex++;
	}
	return (dest);
}
