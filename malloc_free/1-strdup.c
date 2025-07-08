#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to new space containing a copy of string.
 * @str: String to be copied
 * Return: Duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
