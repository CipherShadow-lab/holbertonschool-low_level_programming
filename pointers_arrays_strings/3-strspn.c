#include "main.h"
#include <stdio.h>

/**
 * _strspn - Refer to Description
 * @s: pointer to string
 * @accept: accepted string
 * Description: Function gets the length of a prefix substring
 * Return: number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
	}
	return (i);
}
