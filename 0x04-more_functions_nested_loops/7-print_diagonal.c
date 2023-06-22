#include "main.h"

/**
 * print_diagonal - The starting point
 * Description: prints a line n times long using _putchar
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i;
	int s;

	i = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			s = i - 1;
				while (s > 0)
				{
					_putchar(' ');
					s--;
				}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
