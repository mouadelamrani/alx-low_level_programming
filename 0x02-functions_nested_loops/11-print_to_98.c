#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - starting point
 * Description: prints to 98
 * @n: the argument that is checked
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
