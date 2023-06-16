#include <stdio.h>

/**
 * main - is the starting pooint of the program
 * Description: prints lowercase and uppercase (3-print_alphabets.c)
 * Return: is 0
 */
int main(void)
{
	int chN;

	for (chN = 97; chN <= 122; chN++)
		putchar(chN);
	for (chN = 65; chN <= 90; chN++)
		putchar(chN);
	putchar('\n');

	return (0);
}
