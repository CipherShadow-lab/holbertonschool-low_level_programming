#include "main.h"
#include <stdio.h>


/**
 * cap_string - Refer to Description
 * @s: String element to be capitalised.
 * Description: Function capitalises all words of a string.
 * Return: (0) success
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else
		{
			for (j = 0; j < cspc; j++)
			{
				if (s[i - 1] == spc[j] && s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (s);
}
