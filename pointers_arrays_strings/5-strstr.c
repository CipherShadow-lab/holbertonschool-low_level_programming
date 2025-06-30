#include "main.h"
#include <stdio.h>


/**
 * _strstr - Refer to Description
 * @haystack: string to search
 * @needle: string to find
 * Description: Function locates a substring
 * Return: char value of needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
