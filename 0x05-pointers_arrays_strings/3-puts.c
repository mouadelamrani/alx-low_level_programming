#include "main.h"
/**
 * _puts - is the function that prints a given string
 * @str: the given string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
