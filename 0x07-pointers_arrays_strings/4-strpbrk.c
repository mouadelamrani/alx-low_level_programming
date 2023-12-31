#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - This function searches a string
 * for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: a pointer to the byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int found;

	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				found = 1;
			j++;
		}
		if (found == 1)
			return (s + i);
		i++;
	}
	return (NULL);
}
