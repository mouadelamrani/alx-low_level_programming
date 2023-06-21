#include "main.h"

/**
 *  print_alphabet - is the starting point of the program
 * Description: this program prints all the alphabets
 * using only two _putchart calls
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
