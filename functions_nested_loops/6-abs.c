#include "main.h"

/**
  * int _abs - refer to Description
  * Description: _abs computes the absolute value of an integer
  * @r: The character to be checked
  *
  * Return: Absolute value of r
  */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
