#include "main.h"
/**
 * print_rev - is the function that prints a string in reverse
 * @str: the string
 */

void print_rev(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	/**
	  * the "i--" is the for the auto added line
	  */
	i--; 
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
