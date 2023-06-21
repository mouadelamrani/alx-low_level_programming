#include "main.h"

/**
 * times_table -  The starting point
 * Description: this function calculates the 9 times table
 * Return: void
 */

void times_table(void)
{
	int n1, n2, sum;


		for (n1 = 0; n1 < 10; n1++)
		{
			for (n2 = 0; n2 < 10; n2++)
			{
				sum = n2 * n1;
				if (n2 == 0)
				{
					_putchar(sum + '0');
				}


				if (sum < 10 && n2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(sum + '0');
				}
				else if (sum >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((sum / 10) + '0');
					_putchar((sum % 10) + '0');
				}
			}
			_putchar('\n');
		}
}
