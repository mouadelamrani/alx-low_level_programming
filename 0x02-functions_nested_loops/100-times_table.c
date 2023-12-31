#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 * Return: coid
 */
void print_times_table(int n)
{
	int n1, n2, final;

	if (n >= 0 && n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar('0');

			for (n2 = 1; n2 <= n; n2++)
			{
				_putchar(',');
				_putchar(' ');

				final = n1 * n2;

				if (final <= 99)
					_putchar(' ');
				if (final <= 9)
					_putchar(' ');

				if (final >= 100)
				{
					_putchar((final / 100) + '0');
					_putchar(((final / 10)) % 10 + '0');
				}
				else if (final <= 99 && final >= 10)
				{
					_putchar((final / 10) + '0');
				}
				_putchar((final % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

