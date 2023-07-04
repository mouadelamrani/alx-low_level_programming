#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string to locate c from.
 * @c: the character to locate in s.
 * Return: a pointer to c in the string s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
