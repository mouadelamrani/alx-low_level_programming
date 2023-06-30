#include "main.h"
/**
 * reverse_array - this functions reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 **/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int swap;

	while (i < n / 2)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		i++;
		j--;
	}
}
