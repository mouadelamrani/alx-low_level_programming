#include "main.h"

/**
 *  _isalpha - is the starting point of the program
 * @c: is the parametre that is checked
 * Description: this program checks if a character is an alphabit or not
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
