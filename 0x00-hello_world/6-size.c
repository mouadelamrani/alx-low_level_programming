#include <stdio.h>
/**
 * main - is the starting point of the program
 *
 * Return: equals 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a long float: %lu byte(s)\n", sizeof(float));
	return (0);
}
