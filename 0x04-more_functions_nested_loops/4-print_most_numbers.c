#include "main.h"

/**
 * print_most_ns - prints n
 * description: prints n starting from 0 to 9 except for 2 and 4
 */

void print_most_ns(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		if (n == '2' || n == '4')
			n++;
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
