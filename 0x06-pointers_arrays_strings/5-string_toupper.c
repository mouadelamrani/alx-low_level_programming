#include "main.h"

/**
 * string_toupper - this function converts lowercase characters to uppercase
 * @s: the string
 * Return: the converted string
 **/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 'A' - 'a';
		}
		i++;
	}
	return (s);
}
