#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints n
 * description: prints n starting from 0 to 9 except for 2 and 4
 */

void print_most_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		if (n == '2' || n == '4')
		{
			n++;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}