#include "main.h"
/**
 * _strlen - is the funtction that returns
 * the length of a given string
 * @s: is the pointed to
 * Return: returns the length of the given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
