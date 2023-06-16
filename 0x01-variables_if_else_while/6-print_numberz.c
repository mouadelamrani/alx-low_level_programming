#include <stdio.h>

/**
 * main - is he starting point
 * Description: from 0to 10 using base 10
 * followed by a new line, using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
