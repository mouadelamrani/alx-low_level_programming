#include <stdio.h>
/**
 * main - is the starting point
 * Description: This program prints all possible different
 * combinations of 3 digits
 * Return: is 0
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = 49; n2 < 58; n2++)
		{
			for (n3 = 50; n3 < 58; n3++)
			{
				if (n3 > n2 && n2 > n1)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 != 55 || n2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
