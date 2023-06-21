#include "main.h"

/**
  * print_last_digit - find and prints the last digit of a number
  * @n: The analyzed parametre
  * Return: result
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

