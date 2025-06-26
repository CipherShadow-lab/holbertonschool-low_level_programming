#include "main.h"
#include <stdio.h>


/**
 * rev_string - Refer to Description
 * @s: String to be printed
 * Description: Function reverses a string
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, k;
	char *t, tmp;

	t = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		t++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		tmp = s[i];
		s[i] = *t;
		*t = tmp;
		t--;
	}
}
