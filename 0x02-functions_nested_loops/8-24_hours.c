#include "main.h"

/**
 * jack_bauer -  The starting point
 * Description: this function prints time from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h <= 23)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar (h / 10+ '0');
			_putchar (h  % 10 + '0');
			_putchar (' : ');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar ( '\n');
		}
	}
}
