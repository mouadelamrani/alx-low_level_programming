#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * description: prints number starting from 0 to 9
 */

void print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
