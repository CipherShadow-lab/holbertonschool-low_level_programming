#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Refer to Description
 * @s: String to be printed
 * Description: Function reverses a string
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0;
	int r = strlen(s) - 1;
	char t;

	while (c < r)
	{
		t = s[c];
		s[c] = s[r];
		s[r] = t;

		c++;
		r--;
	}
}
