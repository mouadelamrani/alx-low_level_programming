#include "main.h"

/**
 *  print_alphabet_x10 - is the starting point of the program
 * Description: this program prints all the alphabets
 * 10 times using only two _putchart calls
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int n = 0;

	while (n <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	n++;
	}
}
