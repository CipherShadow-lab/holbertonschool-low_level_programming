#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Refer to Description
 * @s: First string
 * @accept: Second string
 * Description: Function searches a string for a set byte.
 * Return: a pointer to the byte in s that matches a byte in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
