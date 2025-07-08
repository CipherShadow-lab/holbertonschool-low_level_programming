#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings.
 * @s1: First string to be copied
 * @s2: Second string to be copied
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int index1 = 0;
	int index2 = 0;
	char *fullstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	fullstr = malloc(length1 + length2 + 1);
	if (fullstr == NULL)
	{
		return (NULL);
	}
	while (index1 < length1)
	{
		fullstr[index1] = s1[index1];
		index1++;
	}
	while (index2 <= length2)
	{
		fullstr[index1 + index2] = s2[index2];
		index2++;
	}
	return (fullstr);
}
