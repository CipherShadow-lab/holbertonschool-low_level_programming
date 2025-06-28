#include "main.h"
#include <stdio.h>


/**
 * string_toupper - Refer to Description
 * @str: String to be printed in uppercase
 * Description: Function changes all lowercase letters of a string to uppercase
 * Return: (str)
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
