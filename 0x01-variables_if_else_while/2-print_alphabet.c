#include <stdio.h>
/**
  * main - is the starting point
  * Description: 2-print_alphabet.c
  * Return: is 0
  */
int main(void)
{

	int chN;

	for (chN = 97; chN <= 122; chN++)
	{
		putchar(chN);
	}
	putchar('\n');

	return (0);
}
