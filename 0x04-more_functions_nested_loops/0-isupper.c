#include "main.h"

/**
 * _isupper - the starting point
 * Description: This function checks if the letter is uppercase or not
 * @c: the char to be checked
 * Return: 1 for uppercase, 0 lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
