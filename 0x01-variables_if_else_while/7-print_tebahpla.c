#include <stdio.h>
/**
 * main - is the startting point of my program
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: is 0
 */
int main(void)
{

	int chN;

	for (chN = 122; chN >= 97; chN--)
	{
		putchar(chN);
	}
	putchar('\n');

	return (0);
}
