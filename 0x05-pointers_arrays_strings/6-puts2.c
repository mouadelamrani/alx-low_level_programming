#include "main.h"
/**
 * puts2 - is the function prints strings starting from
 * the first char
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
