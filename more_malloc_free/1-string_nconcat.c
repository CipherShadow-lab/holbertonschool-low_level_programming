#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes of second string
 * Return: concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int strlen1 = 0;
	unsigned int strlen2 = 0;
	char *concatstring;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[strlen1] != '\0')
		strlen1++;

	while (s2[strlen2] != '\0')
		strlen2++;

	if (n >= strlen2)
	{
		n = strlen2;
	}

	concatstring = malloc(strlen1 + n + 1);
	if (concatstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			concatstring[i] = *s1, s1++;
		else
			concatstring[i] = *s2, s2++;
	}
	concatstring[i] = '\0';
	return (concatstring);
}
