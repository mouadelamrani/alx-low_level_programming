#include <stdio.h>

/**
 * main - is the starting point
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: is 0
 */
int main(void)
{
	int n;
	int alph;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alph = 97; alph <= 102; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
