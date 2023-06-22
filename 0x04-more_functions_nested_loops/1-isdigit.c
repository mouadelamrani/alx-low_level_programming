#include "main.h"

/**
 * _isdigit - the strating point
 * Description: this function that checks if c is a number
 * @c: the char to be checked
 * Return: 1 for number , 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
