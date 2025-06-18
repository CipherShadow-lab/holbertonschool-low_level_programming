#include "main.h"

/**
  * _islower - refer to Description
  * Description: Checks if c exists and if it is lowercase.
  * @c: The character to be checked
  * Return: (0) success
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
