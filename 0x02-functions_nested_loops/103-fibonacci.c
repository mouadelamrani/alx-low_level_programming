#include <stdio.h>

/**
 * main - the starting point
 * Description: Prints the sum of even-valued Fibonacci sequence
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fsum;
	float tot_sum;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			tot_sum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
