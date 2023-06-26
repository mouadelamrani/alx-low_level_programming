#include "main.h"
/**
 * _strcpy - is the functions that copies a string from src in order dest
 * @dest: is the string to copy to
 * @src: is the string to copy from
 * Return: dest the string the has src content
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
