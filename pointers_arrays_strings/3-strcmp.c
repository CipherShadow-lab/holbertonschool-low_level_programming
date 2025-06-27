#include "main.h"
#include <stdio.h>

/**
 *  _strcmp - Refer to Description
 * @s1: first string to compare
 * @s2: second string to compare
 * Description: Function compares two strings
 * Return:
 * returns 0 if s1 == s2
 * returns neg number if s1 < s2
 * returns pos number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
