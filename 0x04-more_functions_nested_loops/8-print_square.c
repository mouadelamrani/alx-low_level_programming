#include "main.h"

/**
 * print_square - the starting point
 * Description: prints a square n times large using _putchar
 * @size: number of rows and columns
 */

void print_square(int size)
{
	int i;
	int n;

	i = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			n = size;
				while (n > 0)
				{
					_putchar('#');
					n--;
				}
			i++;
			_putchar('\n');
		}
	}
}
