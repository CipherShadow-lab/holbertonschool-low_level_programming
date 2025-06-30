#include "main.h"
#include <stdio.h>

/**
 * _strchr - Refer to Description
 * @s: pointer to a String
 * @c: Character to find
 * Description: Function locates a character in a string
 * Return: pointer to the character found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
