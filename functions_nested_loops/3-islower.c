#include "main.h"

/**
  * _islower - refer to Description
  * Description: Checks for letter c and if it is lowercase.
  * Return: (0) success
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
