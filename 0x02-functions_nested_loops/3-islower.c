#include "main.h"

/**
 *  _islower - is the starting point of the program
 * @c: is the parametre that is checked 
 * Description: this program prints 1 if c is lowercase and 0 if otherwise
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
