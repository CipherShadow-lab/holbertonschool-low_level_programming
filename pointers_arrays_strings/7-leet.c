#include "main.h"
#include <stdio.h>


/**
 * leet - Refer to Description
 * @s: String element to be encoded.
 * Description: Function encodes a string into 1337
 * Return: (0) success
 */

char *leet(char *s)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_chars[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_chars[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
