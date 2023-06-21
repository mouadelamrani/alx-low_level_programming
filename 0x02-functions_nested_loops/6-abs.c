#include "main.h"

/**
  * _abs - calculates value  of an integer.
  * @c: The calculated parametre.
  * Return: the result or 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}

	return (c);
}
