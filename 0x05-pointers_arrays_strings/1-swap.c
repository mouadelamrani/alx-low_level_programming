#include "main.h"
/**
 * swap_int - is the function that swaps
 * two int pointers's values.
 * @a: is the first int pointer
 * @b: is the second int pointer
 */

void swap_int(int *a, int *b)
{
	int swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;
}
